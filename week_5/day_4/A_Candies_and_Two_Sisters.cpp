//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    if(n < 3){
        cout<<0<<'\n';
    }
    else{
        if(n%2 == 0){
            cout<<((n/2)-1)<<'\n';
        }
        else{
            cout<<n/2<<'\n';
        }
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