//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,a,b;
    cin>>n>>a>>b;

    if(n==1 || n==a && a==b){
        cout<<"YES"<<'\n';
        return;
    }
    else if(n-1 > a+b){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<'\n';
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