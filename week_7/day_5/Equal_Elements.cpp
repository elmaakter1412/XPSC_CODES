//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    vector<ll>cnt(n+1, 0);
    for(int i=0; i<n; i++){
        cin>>a[i];
        cnt[a[i]]++;

    }
    sort(cnt.begin(), cnt.end());
    ll maxx = cnt[n];
    cout<<n-maxx<<'\n';
    
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