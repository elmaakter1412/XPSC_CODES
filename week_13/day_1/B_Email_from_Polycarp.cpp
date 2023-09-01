//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){

    string s, str;
        cin>>s>>str;
        ll i = 0, j = 0;
        bool flag = true;
        while(j < str.size()) {
            if(s[i] == str[j] && i < s.size()){
                i++;
                j++;
            }
            else if(s[i-1] == str[j] && i != 0){
                j++;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag && i == s.size())
            cout<<"YES"<<'\n';
        else
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