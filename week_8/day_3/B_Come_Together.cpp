//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll Xa,Xb,Xc,Ya,Yb,Yc;
    cin>>Xa>>Xb>>Xc>>Ya>>Yb>>Yc;

    Xb -= Xa;
    Xc -= Xa;

    Yb -= Ya;
    Yc -= Ya;

    ll solve = 1;
    if(Xb*Xc > 0){
        solve += min(abs(Xb), abs(Xc));
    }
    if(Yb*Yc > 0){
        solve += min(abs(Yb), abs(Yc));
    }
    cout<<solve<<'\n';
    
    
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