//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    int cnt = 0;
    int ans = 0;
 
    for(int i=1; i<10e3; i++){
        if(n%i==0){
            cnt++;
        }
        else{
            cnt = 0;
        }
        ans = max(ans, cnt);
    }
    // ll ans = max(ans, cnt);
    cout<<ans<<'\n';
    
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