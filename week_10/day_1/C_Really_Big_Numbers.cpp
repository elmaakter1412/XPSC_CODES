//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,s,l,h,m;
    cin>>n>>s;
    l = 1, h = n;
    while(l<=h){
        m = (l+h)/2;
        int ans = 0;
        ll p = m;
        while(p){
            ans+=p%10;
            p/=10;
        }
        if(m-ans >= s){
            h = m-1;
        }
        else{
            l = m+1;
        }
    }
    cout<<n-l+1<<'\n';

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}