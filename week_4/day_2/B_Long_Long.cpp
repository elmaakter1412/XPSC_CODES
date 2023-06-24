//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    
    ll ans = 0, maxx = 0;
    bool previous = true;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;

        if(a < 0 && previous){
            ans++;
            previous = false;
        }
        if(a > 0){
            previous = true;
        }
        maxx = maxx + abs(a);
    }
    cout<<maxx <<" "<<ans<<"\n";


    
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