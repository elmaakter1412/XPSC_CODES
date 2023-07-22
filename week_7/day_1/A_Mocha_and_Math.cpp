//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int M = 1e2 + 11;
//vector<ll>a(M);

    
void result(){
    int n;
    cin>>n;

    vector<ll>a(M);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int solve = a[1];
    for(int i=2; i<=n; i++){
        solve = solve & a[i];
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