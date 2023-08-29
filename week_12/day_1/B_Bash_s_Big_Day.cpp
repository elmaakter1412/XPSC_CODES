//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=1e5+20;
    
void result(){
    ll n;
    cin>>n;
    vector<ll>a(N);
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        for(int j=1; j*j<=x; j++){
            if(x%j==0){
                a[j]++;
                if(j*j<x){
                    a[x/j]++;
                }
            }
        }
    }
    ll result = 1;
    for(int i=2; i<N; i++){
        result = max(result, a[i]);
    }
    cout<<result<<'\n';
    
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