//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    double a,b;
    cin>>a>>b;

    double dis_pz = a - (a*10/100);

    if(dis_pz > b){
        cout<<"DINING"<<'\n';
    }
    else if(dis_pz < b){
        cout<<"ONLINE"<<'\n';
    }
    else if(dis_pz == b){
        cout<<"EITHER"<<'\n';
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