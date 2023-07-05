//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string ss;
    cin>>ss;
 
    set<char>st;
    st.insert(ss[0]);
    ll count = 0;
    ll n = ss.size();
 
    for(int i=1; i<n; i++){
        if(st.size() == 3 && st.find(ss[i]) == st.end()){
            count++;
            st.clear();
        }
        st.insert(ss[i]);
    }
    if(st.size()){
        cout<<count + 1<<"\n";
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