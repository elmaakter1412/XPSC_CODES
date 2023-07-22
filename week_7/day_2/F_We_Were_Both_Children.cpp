//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    vector<ll>b(n+1);

    for(int i=0; i<n; i++){
        ll t;
        cin>>t;
        if(t<=n){
            a[t]++;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j = j+i){
            b[j] = b[j] + a[i];
        }
    }
    cout<<(*max_element(b.begin(), b.end()))<<'\n';
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}