//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 2e5+2;
vector<ll>a(N);
    
void result(){
    ll n;
    cin>>n;
    
    ll ans = 0;
    for(int i=1; i<=n; i++){
        cin>>a[i];

    }

    for(int i=1; i<=n; i++){
        for(int j=a[i]-i; j<=n; j+=a[i]){
            if(j<=i){
                continue;
            }
            if(a[i]*a[j]==i+j){
                ans++;
            }
        }
    }
    
    cout<<ans<<'\n';
    
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