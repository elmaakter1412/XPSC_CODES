//Author: elmaakter14120;

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result() {
    ll n;
    cin >> n;

    ll pedestal = (n - 1) / 3 + 1;

    ll x = pedestal;
    ll y = pedestal;
    ll z = n - x - y;

    while (y <= x) {
        x--;
        y++;

        while (z >= x) {
            z--;
            x++;
        }
    }
    cout<<x<<" "<<y<<" "<<z<<"\n";
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
