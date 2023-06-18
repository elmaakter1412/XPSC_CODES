// Author : ekramul11

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

bool is_valid_pair(string a, string b) {
    char c1 = a[0], c2 = a[1], c3 = b[0], c4 = b[1];
    if (a == b)
        return false;
    else if (c1 == c3 && c2 != c4)
        return true;
    else if (c1 == c4 && c2 != c3)
        return true;

    else if (c2 == c3 && c1 != c4)
        return true;

    else if (c2 == c4 && c1 != c3)
        return true;
    else
        return false;
}

void solution() {
    ll n;
    cin >> n;
    map<char, ll> f, s;
    map<string, ll> O;
    vector<string> a(n);
    foi(n) {
        cin >> a[i];
        f[a[i][0]]++;
        s[a[i][1]]++;
        O[a[i]]++;
    }
    ll cnt = 0;
    foi(n) {
        cnt += max((ll)0, f[a[i][0]] - O[a[i]]) + max((ll)0, s[a[i][1]] - O[a[i]]);
        if (f[a[i][0]] > 0) f[a[i][0]]--;
        if (s[a[i][1]] > 0) s[a[i][1]]--;
        if (O[a[i]] > 0) O[a[i]]--;
    }
    cout << cnt << "\n";
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