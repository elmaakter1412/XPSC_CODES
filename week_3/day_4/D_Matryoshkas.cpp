//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    multiset<ll>st;

    int x, ans = 0;
    for(int i=0; i<n; i++){
        cin>>x;
        st.insert(x);
    }
    while(!st.empty()){
        ll i = *st.begin();
        ans++;

        for(int j=i; ; j++){
            auto s = st.find(j);
            if(s == st.end()){
                break;
            }
            else{
                st.erase(s);
            }
        }
    }
    cout<<ans<<"\n";
    
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