//Author: elmaakter14120;

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
void solution() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<pair<char, char>> m;
    int cnt = 0;
    for (int i = 0; i < (n - 1); i++) {
        bool is_fnd = false;
        pair<char, char> x(s[i], s[i + 1]);
        for (int j = 0; j < m.size(); j++) {
            if (x == m[j]) {
                is_fnd = true;
            }
        }
        if (!is_fnd) {
            cnt++;
            m.push_back(x);
        }
    }
    cout << cnt << "\n";
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