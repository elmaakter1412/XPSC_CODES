//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<'\n';
 
    for(ll i=l; i<=r; i++){


        cout<<i<<" ";
        if(i%2==0){
            cout<<'\n';
        }
    }
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case=1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}