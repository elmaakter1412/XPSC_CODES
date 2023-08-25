//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool prime(ll n){
    if(n == 1){
        return false;
    }
 
    if(n == 2){
        return true;
    }
 
    if(n%2 == 0){
        return false;
    }
 
    for(int i = 3; i*i <= n; i+=2){
        if (n%i == 0){
            return false;
        }
    }
 
    return true;
}
    
void result(){
    ll n;
    cin >> n;
    for(int k = 0; k < n; ++k){
       ll x;
        cin >> x;
 
        ll p = (0.5 + sqrt((long double)x));
        if (p*p != x){
            cout << "NO" << endl;
            continue;
        }
 
        if (prime(p)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
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