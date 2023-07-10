//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, a[200005], ans, even, even1, odd, odd1;
    
void result(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(i % 2 == 0){
            odd += a[i];
        }
        if(i % 2 == 1){
            even += a[i];
        }
    }
    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            odd -= a[i];
        }
        if (i % 2 == 1){
            even -= a[i];
        }
        if(odd + even1 == even + odd1){
            ans++;
        }
        if(i % 2 == 0){
            odd1 += a[i];
        }
        if(i % 2 == 1){
            even1 += a[i];
        }
 
    }
    cout<<ans<<'\n';
    
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