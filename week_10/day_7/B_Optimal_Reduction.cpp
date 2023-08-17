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
    ll ans1 = a[0];
    for(int i=1; i<n; i++){
        ans1 = ans1 + max(a[i]-a[i-1], 0LL);
    }
    sort(a.begin(), a.end());
    ll ans2 = a[0];
    for(int i=1; i<n; i++){
        ans2 = ans2 + max(a[i]-a[i-1], 0LL);
    }
    if(ans1==ans2){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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