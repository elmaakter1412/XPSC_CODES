//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9+7;
    
void result(){
    int a,b;
    cin>>a>>b;

    ll solved = 1;
    for(int i=0; i<a; i++){
        // solved = solved * (a-b);
        // solved = solved % mod;
        solved = (solved * b) % mod;
        if(b > 1){
            b--;
            
        }
    }
    cout<<solved<<'\n';
    
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