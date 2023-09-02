//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    vector<ll>idx(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i]--;
        idx[a[i]] = i;
    }
    ll count=0;
    for(int i=1; i<n; i++){
        if(idx[i] > idx[i-1]){
            continue;

        }
        else{
            count++;
        }
    }
    cout<<count<<'\n';
    
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