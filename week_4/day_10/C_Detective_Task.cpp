//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){

    string s;
    cin>>s;
    
    ll n = s.size();

    ll ONE = 0, ZERO = n - 1;

    for(ll i=0; i<n; i++){
        if(s[i] == '1'){
            ONE = i;
        }
    }

    for(ll i=n-1; i>=0; i--){
        if(s[i] == '0'){
            ZERO = i;
        }
    }
    cout<<ZERO-ONE+1<<"\n";
    return;
    
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