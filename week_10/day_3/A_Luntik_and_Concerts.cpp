//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int x,y,z;
    cin>>x>>y>>z;

    int ans = x*1 + y*2 + z*3;
    if(ans%2==0){ // (ans&1)
        cout<<0<<'\n';
    }
    else{
        cout<<1<<'\n';
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