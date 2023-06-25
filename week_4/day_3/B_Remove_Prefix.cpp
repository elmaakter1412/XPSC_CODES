//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    set<ll>st;
    ll count = 0, q = 0;
    for(ll i=n-1; i>=0; i--){
        st.insert(a[i]);
        count++;
        if(st.size() != count){
            q=1;
            break;
        }
    }
    cout<<n-(count-q)<<"\n";
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