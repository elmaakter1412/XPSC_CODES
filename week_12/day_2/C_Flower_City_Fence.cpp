//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    for(auto &val : a){
        cin>>val;
    }
    bool k(0);
    for(int i=0; i<n&&!k; i++){
        k |= (a[i] > n || a[a[i]-1] < i+1);
    }
    if(k){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
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