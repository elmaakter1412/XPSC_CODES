//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    ll cnt = 0;

    vector<ll>a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] < 0){
            cnt++;
        }
        
    }
    ll solve = 0;
    for(int i=0; i<n; i++){
        b[i] = abs(a[i]);
        solve = solve + b[i];
    }
    sort(b.begin(), b.end());
    if(cnt%2==0){
        cout<<solve<<'\n';
    }
    else{
        cout<<solve-2*b[0]<<'\n';
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