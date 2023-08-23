//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    ll ans = 1;
    if(c < a && e < a){
        ans = ans + min(abs(c-a), abs(e-a));
    }
    if(c > a && e > a){
        ans = ans + min(abs(c-a), abs(e-a));
    }
    if(d < b && f < b){
        ans = ans + min(abs(d-b), abs(f-b));
    }
    if(d > b && f > b){
        ans = ans + min(abs(d-b), abs(f-b));
    }
    cout<<ans<<'\n';
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