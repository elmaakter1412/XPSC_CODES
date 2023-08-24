//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    ll a[n];

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ll m = -1;
    cout<<1;

    ll b = a[1];
    bool f = 0;
    for(int i=2; i<=n; i++){
        bool t = 0;
        if(a[i] >= b && f == 0){
            cout<<1;
            b = a[i];
            t = 1;
        }
        else if(a[i] <= a[1] && a[i] >= m){
            m = a[i];
            f = 1;
            t = 1;
            cout<<1;

        }
        if(t==0){
            cout<<0;
        }
    }
    cout<<'\n';

    
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