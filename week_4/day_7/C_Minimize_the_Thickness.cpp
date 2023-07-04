//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n+10);
    ll sum = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];

        sum = sum + a[i];
    }

    ll ans = INT_MAX;
    for(int i=1; i<=n; i++){
        if(sum % i != 0){
            continue;
        }

        ll curr_tickness = 0, curr_sum = 0, z = 0;

        ll first = 0, temp = 0;
        for(int j=0; j<n; j++){
            curr_sum = curr_sum + a[j];
            curr_tickness++;

            if(curr_sum == sum / i){
                first = 1;
                z++;
                temp = max(temp, curr_tickness);
                curr_sum = 0;
                curr_tickness = 0;
            }
        }

        if(first && z == i){
            ans = min(ans, temp);
        }
    }
    cout<<ans<<"\n";

    
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