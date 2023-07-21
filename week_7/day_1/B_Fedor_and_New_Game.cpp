//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll>a(m+1);

    ll ans = 0;
    for(int i=0; i<=m; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        if(__builtin_popcount(a[i] ^ a[m]) <= k){
            ans++;
        }
    }
    cout<<ans<<"\n";
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