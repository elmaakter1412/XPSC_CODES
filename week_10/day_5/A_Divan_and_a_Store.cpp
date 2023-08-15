//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, l, r,k;
    cin>>n>>l>>r>>k;
    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll sum = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] >= l && a[i] <= r){
            if(sum +  a[i] <= k){
                ans++;
                sum = sum + a[i];
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