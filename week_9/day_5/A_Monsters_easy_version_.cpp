//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector<ll>y(n);
    y[0] = 1;
    for(int i=1; i<n; i++){
        y[i] = min(y[i-1]+1,a[i]);
    }
    ll solve = 0;
    for(int i=0; i<n; i++){
        solve = solve + a[i]-y[i];
    }
    cout<<solve<<'\n';
    
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