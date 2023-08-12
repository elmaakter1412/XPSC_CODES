//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool f(ll x, ll y){
    return x > y;
}
    
void result(){
    ll n,h;
    cin>>n>>h;
    vector<ll>a(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), f);
    ll x = a[0];
    ll y = a[1];

    ll solve = h / (x+y)*2;
    ll count = h % (x+y);

    if(count > x){
        solve = solve + 2;
    }
    else if(count > 0){
        solve++;
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