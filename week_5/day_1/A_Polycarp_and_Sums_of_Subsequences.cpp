//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    vector<ll>v(7);
    for(int i=0; i<7; i++){
        cin>>v[i];
    }
    cout<<v[0]<<" "<<v[1]<<" ";

    ll n = v[0] + v[1];
    if(n==v[2]){
        cout<<v[3]<<'\n';
    }
    else{
        cout<<v[2]<<'\n';
    }
    
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