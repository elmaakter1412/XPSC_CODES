//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1e6;
ll a[N], b[N], c[N];
    
void result(){
    ll n, q;
    cin>>n>>q;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=q; i++){
        ll left, right;
        cin>>left>>right;
        b[right]++;
        c[left-1]++;


    }
    for(int i=n; i>=1; i--){
        b[i-1] = b[i-1]+b[i];
        c[i-1] = c[i-1]+c[i];

        b[i] = b[i]-c[i];
    }
    sort(b+1, b+1+n);
    sort(a+1,a+1+n);
    ll sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + (ll)(a[i]*b[i]);
    }
    cout<<sum<<'\n';
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case=1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}