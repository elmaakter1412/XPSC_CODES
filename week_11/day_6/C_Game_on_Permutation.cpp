//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    ll lucky_ele1 = n+1, lucky_ele2 = n+1, count=0;
    for(int i=0; i<n; i++){
        ll m;
        cin>>m;
        if(lucky_ele1 > m){
            lucky_ele1 = m;
        }
        else if(lucky_ele2 > m){
            lucky_ele2 = m;
            count++;
        }
    }
    cout<<count<<'\n';

    
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