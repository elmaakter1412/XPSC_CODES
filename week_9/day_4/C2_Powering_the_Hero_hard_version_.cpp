//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
priority_queue<ll>q;
    
void result(priority_queue<ll>&q){
    priority_queue<ll>empty;
    swap(empty, q);
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;
        ll ans = 0;
 
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
 
            if(x != 0){
                q.push(x);
            }
            else if(q.size()){
                ans = ans + q.top();
                q.pop();
            }
        }
        result(q);
        cout<<ans<<"\n";
    }
    return 0;
}