//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n+1);
    ll ans = 1002;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        for(int j=1; j<i; j++){
            ans = min(ans, abs(a[i]-a[j]));

        }
    }
    cout<<ans<<"\n";
    
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