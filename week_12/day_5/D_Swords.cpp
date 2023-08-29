//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, m = 0, i;
    cin>>n;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll maxx = -1;
    for(i=0; i<n-1; i++){
        m = __gcd(a[i+1] - a[i], m);
        maxx = max(maxx, a[i]);
    }
    maxx = max(maxx, a[i]);
    ll result = 0;
    for(int i=0; i<n; i++){
        result = result + (maxx-a[i])/m;
    }
    cout<<result<<" "<<m;

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}