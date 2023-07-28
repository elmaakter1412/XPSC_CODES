//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll a,b,c;
    cin>>a>>b>>c;

    if((a>b) && (b>c)){
        ll xo_r = a|b|c;
        cout<<xo_r<<'\n';
        
    }
    else if((a<b) && (b<c)){
        cout<<0<<"\n";

    }
    else{
        cout<<-1<<'\n';
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