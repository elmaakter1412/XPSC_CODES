//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b,c;
    cin>>a>>b>>c;

    int need_attack = ceil((a-c) / (b * 1.0)) + 1;
    if(c >= a){
        need_attack = 1;
    }
    cout<<need_attack<<'\n';
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}