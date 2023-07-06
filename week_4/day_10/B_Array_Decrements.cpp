//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    vector<ll>b(n);

    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    for(ll i=0; i<n; i++){
        cin>>b[i];
    }

    ll maxx = 0;
    for(ll i=0; i<n; i++){
        maxx = max(maxx, a[i] - b[i]);
    }
    bool flag = true;
    for(ll i=0; i<n; i++){
        if(b[i] != max(a[i] - maxx, static_cast<ll>(0))){
            flag = false;
        }
    }

    if(flag){
        cout<<"YES"<<"\n";
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