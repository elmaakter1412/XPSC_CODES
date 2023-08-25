//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
bool is_prime(ll m){
    if(m==1){
        return false;
    }
    if(m==2){
        return true;
    }
    if(m%2==0){
        return false;
    }
    for(ll i=3; i*i<=m; i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
void result(){
    ll n;
    cin>>n;
 
    if(is_prime(n)){
        cout<<1<<'\n';
    }
    else if(n & 1){
        if(is_prime(n-2)){
            cout<<2<<'\n';
        }
        else{
            cout<<3<<"\n";
        }
    }
    else{
        cout<<2<<"\n";
    }
 
    
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