//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);

    vector<pair<ll, ll>>vp;
    for(int i=0; i<n; i++){
        cin>>a[i];
        vp.push_back({a[i],1});
    }
    ll i=0;
    while(1){
        if(vp[i].first%x==0){
            vp.push_back({vp[i].first/x, x*vp[i].second});

        }
        else{
            break;
        }
        i++;
    }
    ll result = 0;
    for(auto val: vp){
        result = result+ val.first*val.second;
    }
    cout<<result<<'\n';
    
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