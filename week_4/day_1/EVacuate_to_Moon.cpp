//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll x,y,h;
    cin>>x>>y>>h;

    vector<ll>a(x);
    vector<ll>b(y);

    for(int i=0; i<x; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    for(int i=0; i<y; i++){
        cin>>b[i];
    }
    sort(b.begin(), b.end());

    ll i = x - 1;
    ll j = y - 1;
    ll ans = 0;
    while(i != -1 && j != -1){
        ll m = b[j] * h;
        if(m > a[i]){
            ans = ans + a[i];
        }
        else{
            ans = ans + m;
        }
        i--;
        j--;
    }
    cout<<ans <<"\n";
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