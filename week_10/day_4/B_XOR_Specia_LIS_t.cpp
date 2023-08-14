//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result(){
    ll n;
    cin>>n;
 
    vector<ll>a(n+1); //= {0};
    bool flg = true;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        flg &= a[i] > a[i-1];
    }
    if(n%2==0 || !flg){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}