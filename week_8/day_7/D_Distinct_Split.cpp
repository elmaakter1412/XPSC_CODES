//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    string s;
    cin>>n>>s;

    vector<ll>a(n+1), b(n+1);

    set<ll>se1, se2;
    b[0] = 0;
    for(int i=1; i<n+1; i++){
        se1.insert(s[i-1]);
        b[i] = se1.size();
    }
    a[n] = 0;
    for(int i=n-1; i>=0; i--){
        se2.insert(s[i]);
        a[i] = se2.size();
    }
    ll solve = INT_MIN;
    for(int i=0; i<n+1; i++){
        solve = max(solve, a[i]+b[i]);
    }
    cout<<solve<<'\n';

    
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