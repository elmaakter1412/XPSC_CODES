//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b,c;
    cin>>a>>b>>c;
    
    ll total = a;
    if(c>1){
        total = total + (c-1)*b;
    }
    cout<<total<<"\n";

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}