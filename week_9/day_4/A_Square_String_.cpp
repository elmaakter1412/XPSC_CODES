//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string str;
    cin>>str;

    ll n = str.size();
    for(int i=0; i<n; i++){
        string v = str.substr(0,i);
        v+=v;

        if(v==str){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
    
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