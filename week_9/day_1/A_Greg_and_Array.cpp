//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1e5;
vector<ll>l(N);
vector<ll>r(N);
vector<ll>d(N);
vector<ll>a(N);
vector<ll>pre(N);
vector<ll>prefO(N);

    
void result(){
    ll n,m,k;
    cin>>n>>m>>k;

    for(int i = 0; i < n; ++i){
		cin >> a[i];
    }
	for(int i = 0; i < m; ++i){
		cin>>l[i]>>r[i]>>d[i];
		l[i]--;
        r[i]--;
	}
	for(int i = 0; i < k; ++i){
		ll a,b;
		cin>>a>>b;
		a--;
        b--;
		pre[a]++;
		pre[b + 1]--;
	}
	ll current = 0;
	for(int i = 0; i < m; ++i){
		current += pre[i];
		prefO[l[i]] += current * d[i];
		prefO[r[i] + 1] -= current * d[i];
	}
	current = 0;
	for(int i = 0; i < n; ++i) {
		current += prefO[i];
		cout<<a[i] + current<<" ";
	}
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case=1;
   //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}