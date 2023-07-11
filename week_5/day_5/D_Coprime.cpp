
//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    ll a[1025] = {0};
    for(int i=1; i<=n; i++){
        ll p;
        cin>>p;
        a[p] = i;
    }
    ll solved = -1;
    for(int i=1; i<=1005; i++){
        for(int j=1; j<=1005; j++){
            if(a[i] > 0 && a[j] > 0 && __gcd(i,j) == 1){
                solved = max(solved, a[i]+a[j]);
            }
        }
    }
    cout<<solved<<'\n';
    
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