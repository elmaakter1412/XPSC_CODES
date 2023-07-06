//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b,x,y;
    cin>>x>>y;

    a = y % x;
    b = y / x;

    if(a != 0){
        cout<<0<<" "<<0<<"\n";
        return;
    }
    else{
        cout<<1<<" "<<b<<"\n";
        return;
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