//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
 
    if(n==1){
        cout<<0<<"\n";
    }
    else if(n >= 2 && n <= 9){
        cout<<n-1<<"\n";
    }
    else{
        string xs = to_string(n);
        ll m = xs.size();
 
        ll round_down = pow(10, m-1);
        cout<<n-round_down<<"\n";
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