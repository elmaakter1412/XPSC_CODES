//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, x;
    cin>>n>>x;

    //vector<ll>a(n);
    ll a[n];
    map<ll, ll>mp;
    ll ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        if(mp[a[i]] > 0){
            if((mp[a[i] * x]) < 1){
                ans++;
                mp[a[i]]--;
            }
            else{
                mp[a[i] * x]--;
                mp[a[i]]--;
            }
        }
    }
    cout<<ans<<'\n';
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}