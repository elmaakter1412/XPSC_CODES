//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
 
    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int j=0; j<(1<<8); j++){
        vector<ll>vi=a;
        for(int i=0; i<n; i++){
            vi[i] = vi[i]^j;
        }
        ll solve = 0;
        for(int i=0; i<n; i++){
            solve = solve ^ vi[i];
        }
        if(solve==0){
            cout<<j<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
    
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