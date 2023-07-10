//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    if(!((n/2) % 2)){
        cout<<"YES"<<'\n';
    for(int i=1; i<=n/2; i++){
        cout<<i*2<<" ";
    }
    for(int i=1; i<n/2; i++){
        cout<<i*2-1<<" ";
    }
    cout<<n+n/2-1<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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