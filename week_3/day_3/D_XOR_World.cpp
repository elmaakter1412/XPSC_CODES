//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
ll xor_world(ll x){
   switch (x % 4){
   case 0:
    return x;;
   case 1:
    return 1;
   case 2:
    return x+1;
   default:
    return 0;
    
    }
}

void result(){
    ll a,b;
    cin>>a>>b;

    ll ans;
    if(a==0){
        ans = xor_world(b);
    }
    else{
        ans = xor_world(b) ^ xor_world(a-1);
    }
    cout<<ans<<"\n";

}

    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1; 
    while(t--){
        result();
    }
    return 0;
}