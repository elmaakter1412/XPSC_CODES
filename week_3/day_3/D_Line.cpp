// Author : elmaakter14120
 
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
 
int count_val(string s, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            cnt += n - i - 1;
        } else if (s[i] = 'L') {
            cnt += i;
        }
    }
    return cnt;
}
 
void solution() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<ll> a;
 
    ll t_s = 0;
    int mn = 0;
 
    for (int i = 0; i < n; i++) {
        ll L = i;
        ll R = n - i - 1;
        if (s[i] == 'L') {
            if (R > L) {
                mn++;
                t_s += R;
                a.push_back(R - L);
            } else {
                t_s += L;
            }
        } else {
            if (L > R) {
                mn++;
                a.push_back(L - R);
                t_s += L;
            } else {
                t_s += R;
            }
        }
    }
 
    vector<ll> ans(n + 1);
 
    for (int i = mn; i <= n; i++) {
        ans[i] = t_s;
    }
 
    sort(a.begin(), a.end(), greater<ll>());
 
    for (int i = mn - 1; i >= 1; i--) {
        t_s -= a.back();
        a.pop_back();
        ans[i] = t_s;
    }
 
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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