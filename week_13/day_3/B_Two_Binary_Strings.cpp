//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string a,b;
    cin>>a>>b;
    bool flag = false;

    ll n = a.size();
    for(int i=0; i<n; i++){
        if(a[i] == '0' && a[i+1] == '1' && b[i] == '0' && b[i+1] == '1'){
            flag = true;
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