//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(2e5);

    ll maxx = INT_MIN;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        maxx = max(maxx, a[i]);
    }
    ll rslt = 0, new_maxx = 0;
    for(int i=n; i>=1; i--){
        if(a[i] > new_maxx){
            rslt++;
        }
        new_maxx = max(new_maxx, a[i]);
    }
    cout<<rslt-1<<'\n';
    
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