//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    stack<string>st;
    unordered_map<string, bool>mp;

    for(int i=0; i<n; i++){
        string m;
        cin>>m;
        st.push(m);
    }

    string m = "";
    while(!st.empty()){
        string q = st.top();
        st.pop();

        if(mp[q]){
            continue;
        }
        mp[q] = true;
        m = m + q[q.size() - 2] + q[q.size() - 1];
    }
    cout<<m<<"\n";
    
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