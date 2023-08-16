//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a;
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;

        vector<ll>b(x);
        for(auto &it: b){
            cin>>it;
        }

        int minn = *min_element(b.begin(), b.end());
         
        mn = min(mn, minn);
        b.erase(find(b.begin(), b.end(), minn));
        a.push_back(*min_element(b.begin(), b.end()));

    }
    cout<<mn + (ll) accumulate(a.begin(), a.end(), 0LL) - *min_element(a.begin(), a.end())<<'\n';
    
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