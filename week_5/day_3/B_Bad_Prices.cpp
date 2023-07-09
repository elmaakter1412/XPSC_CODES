//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(1e6);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ll minn = INT_MAX;
    ll solved = 0;
    for(int i=n; i>=1; i--){
        if(a[i] > minn){
            solved++;
        }
        minn = min(minn, a[i]);
    }
    cout<<solved / n + 1<<"\n";
    
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