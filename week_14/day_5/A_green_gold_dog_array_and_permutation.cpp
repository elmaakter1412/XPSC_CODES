// Author : elmaakter14120
 
#include <bits/stdc++.h>
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
 
template <class T>
using pb_ds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class K, class V>
using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
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
 
bool comp(pii a, pii b) {
    return a.S <= b.S;
}
 
void solution() {
    int n;
    cin >> n;
    vpii a(n);
    foi(n) {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    sortall(a);
    int p = n;
    foi(n) {
        a[i].F = p;
        p--;
    }
    sort(a.begin(), a.end(), comp);
    foi(n) {
        cout << a[i].F << " ";
    }
    cout << nl;
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