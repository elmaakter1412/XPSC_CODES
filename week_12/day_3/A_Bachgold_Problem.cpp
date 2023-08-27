//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    if(n%2==0){
        cout<<n/2<<'\n';
        for(int i=1; i<=n/2; i++){
            cout<<2<<' ';
        }
    }
    else{
        ll m = n-3;
        cout<<m/2+1<<'\n';
        for(int i=1; i<=m/2; i++){
            cout<<2<<' ';
        }
        cout<<3<<' ';

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