//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    ll multi = 4 * n;
    if(multi <= 1000){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}