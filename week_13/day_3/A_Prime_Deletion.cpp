//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    string res;
    ll n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            res = res + s[i];
        }
        else if(s[i]=='3'){
            res = res + s[i];
        }

    }
    cout<<res<<'\n';
    
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