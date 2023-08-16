//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,s;
    cin>>n>>s;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll b = count(a.begin(), a.end(), 1);
    if(b < s){
        cout<<-1<<'\n';
        return;
    }
    ll sum = a[0];
    ll x=0, y=0;
    ll ans = 0;
    while(x < n && y < n){
        if(sum==s){
            ans = max(ans, abs(x-y)+1);
            y++;
            sum = sum + a[y];
        }
        else if(sum < s){
            y++;
            sum = sum + a[y];
        }
        else{
            if(a[x] == 1){
                sum--;
            }
            x++;
        }
    }
    cout<<n-ans<<'\n';


    
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