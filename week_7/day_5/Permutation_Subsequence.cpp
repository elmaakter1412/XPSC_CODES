//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1e9+7;
    
void result(){
    ll n;
    cin>>n;

   map<ll, ll>mp;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll ans = 0;
    ll s=1;
    for(int i=1; i<=n; i++){
        ll t = s*mp[i];
        t = t%mod;
        ans = ans + t;
        s = t;
        ans = ans%mod;
    }
    cout<<ans<<"\n";

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}