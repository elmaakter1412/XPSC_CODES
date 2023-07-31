//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k, ans = 0;
    cin>>n>>k;
 
    for(int i=1; i<=n; i++){
        int b = n, a = i;
        bool vld_sequ = true;
        for(int j=0; j<k-2; j++){
            int fixing = a;
            a = b - fixing;
            b = fixing;
            vld_sequ &= a <= b;
            vld_sequ &= min(a,b) >= 0;
            if(!vld_sequ){
                break;
            }
        }
        if(vld_sequ){
            ans++;
 
        }
    }
    cout<<ans<<'\n';
    
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