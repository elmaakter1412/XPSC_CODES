//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        cout<<"YES\n";
    }
    else{
        if(k%2==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
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