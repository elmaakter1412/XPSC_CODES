//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll x,y;
    cin>>x>>y;

    ll pet = x*15;
    ll dis = 2*y;

    if(pet >= dis){
        cout<<"yes"<<'\n';
    }
    else{
        cout<<"no"<<'\n';
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