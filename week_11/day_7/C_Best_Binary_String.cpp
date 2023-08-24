//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    ll n = s.size();
    char c = '0';
    for(int i=0; i<n; i++){
        if(s[i] == '?'){
            s[i] = c;
        }
        else{
            c = s[i];
        }
    }
    cout<<s<<'\n';

    
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