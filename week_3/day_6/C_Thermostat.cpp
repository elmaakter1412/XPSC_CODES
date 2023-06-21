//Author: elmaakter14120;

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result() {
    ll l, r, x, a, b;
    cin>>l>>r>>x>>a>>b;

    ll mn = min(a, b);
    ll mx = max(a, b);

    if (a == b) {
        cout<<0<<"\n";
        return;
    }
    if (abs(a - b) >= x) {
        cout<<1<<"\n";
        return;
    }
    if (mx + x <= r || mn - x >= l) {
        cout<<2<<"\n";
        return;
    }
    if (mn + x > b && mn + x <= r && mx - x < a && mx - x >= l) {
        cout<<3<<"\n";
        return;
    }
    cout<<-1<<'\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll ts_case;
    cin >> ts_case;

    while (ts_case--) {
        result();
    }
    return 0;
}
