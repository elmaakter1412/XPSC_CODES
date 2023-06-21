//Author: elmaakter14120;

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
void solution() {
    lli n, k;
    cin >> n >> k;
    vector<pair<lli, lli>> a(n);
    vector<lli> b(n);
 
    for (lli i = 0; i < n; i++) {
        lli x;
        cin >> x;
        a[i] = {x, i};
    }
    for (lli i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<lli> ans(n);
    for (lli i = 0; i < n; i++) {
        lli p = a[i].first;
        lli q = a[i].second;
        ans[q] = b[i];
    }
    for (lli i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    lli ts;
    cin >> ts;
 
    while (ts--) {
        solution();
    }
    return 0;
}