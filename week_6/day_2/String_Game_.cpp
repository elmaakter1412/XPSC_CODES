//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//const ll INF = 1e18;
    
void result(){
    ll n;
    string a;
    cin>>n>>a;
    ll count = 0;
    for(ll i=0; i<=n-1; i++){
        if(a[i] == '1'){
            count++;
        }
    }
    int minn = min(count, n-count);
    if(minn%2){
        cout<<"Zlatan"<<'\n';
    }
    else{
        cout<<"Ramos"<<'\n';
    }
    return;
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