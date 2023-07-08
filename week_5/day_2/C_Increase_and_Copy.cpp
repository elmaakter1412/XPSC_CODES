//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1e9;
    
void result(){
    ll n;
    cin>>n;

    ll ans = INF;
    for(ll i=1; i<=40000; i++){
        ll p;
        p = (i-1);
        if(n % i == 0){
            p = p + (n-i) / i;
        }
        else{
            p = p + (n-i) / i+1;
        }
        ans = min(ans, p);
    }
    cout<<ans<<"\n";


    
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