//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1e9+7;
    
void result(){
    ll n;
    cin>>n;
    ll slv = 1;

    for(int i=3; i<=2*n; i++){
        slv = (slv*i)%mod;
    }
    cout<<slv<<"\n";
    
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