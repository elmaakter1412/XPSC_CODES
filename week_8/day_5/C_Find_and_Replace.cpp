//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    string str;
    cin>>n>>str;

    bool flag = true;
    for(int i=0; i<str.size(); i++){
        for(int j=i+1; j<str.size(); j=j+2){
            if(str[i]==str[j]){
                flag = false;
                break;
            }
            if(flag == false){
            break;
            }
        }
    }
    if(flag){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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