//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    n = unique(a.begin(), a.end())- a.begin();
    ll solve = n;
    for(int i=0; i+2<n; i++){
        solve = solve - (a[i] < a[i+1] && a[i+1] < a[i+2]);
        solve = solve - (a[i] > a[i+1] && a[i+1] > a[i+2]);
    }
    cout<<solve<<"\n";
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