//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 2e5+4;
ll summ[N];

    
void result(){
    ll n, q;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> summ[i];
        summ[i] +=  summ[i - 1];
    }
 
    while(q--){
        ll l, r, k;
        cin>>l >>r>>k;
        ll value = (summ[n] - (summ[r] - summ[l - 1]));
        value = value + (r - l+1) * k;
        if (value % 2 == 1){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }


    
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