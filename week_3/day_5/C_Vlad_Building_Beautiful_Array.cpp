//Author: elmaakter14120;

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define nl "\n"
#define foi(n) for (int i = 0; i < n; i++)
#define foj(i, n) for (int j = i; j < n; j++)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
 
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << " | " << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(_VA_ARGS_)
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
 
const int mod = 1'000'000'007;
const int MAX = 3e5, MAX2 = MAX2;
//=======================
 
void solution() {
    int n;
    cin >> n;
    ll mn = LONG_LONG_MAX;
    ll e = 0, o = 0;
    foi(n) {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            e++;
        else
            o++;
        if (x < mn) mn = x;
    }
    if (mn % 2 != 0)
        cout << "YES\n";
    else if (mn % 2 == 0 && e == n)
        cout << "YES\n";
    else
        cout << "NO\n";
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solution();
    }
 
    return 0;
}