//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;

        vector<ll>a(n);

        ll d = 1e8;
        bool sort = true;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i>0){
                d = min(d, a[i]-a[i-1]);
                sort &= a[i] >= a[i-1];
            }
        }
        if(!sort){
            cout<<0<<'\n';
            continue;
        }
        cout<<d/2+1<<'\n';
        result();
    }
    return 0;
}