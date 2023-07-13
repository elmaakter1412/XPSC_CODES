#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll x[200005];
ll y[200005];
    
void result(){
    ll n;
    cin>>n;
 
    for(int i=1; i<=n; i++){
        x[i] = 0;
        y[i] = 0;
    }
    for(int i=1; i<=n; i++){
        ll t;
        cin>>t;
 
        y[t]++;
        x[t] = i;
    }
    ll sum = 0;
    for(int i=1; i<=200005; i++){
        if(sum == n){
            cout<<-1<<"\n";
            break;
        }
        if(y[i] == 1){
            cout<<x[i]<<"\n";
            break;
        }
        else{
            sum = sum + y[i];
        }
    }
 
    
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