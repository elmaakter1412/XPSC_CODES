//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll INF = 1e9+7;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a;
    ll maxx = INT_MIN, minn = INT_MAX, ans = INF;
    a.resize(n+1);
    for(int i=1; i<=n; i++){
        ll x;
        cin>>x;
        maxx = max(maxx, x);
        minn = min(minn, x);
        if(a[x] > 0){
            ans = min(ans, i-a[x]);
        }
        a[x] = i;
    }
    if(ans == INF){
        cout<<-1<<'\n';
    }
    else{
        cout<<ans+1<<'\n';
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