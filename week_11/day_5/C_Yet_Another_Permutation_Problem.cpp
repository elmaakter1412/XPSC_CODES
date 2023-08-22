//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
 
    vector<ll>a(n+1), solve;
    for(int i=1; i<=n; i++){
       if(a[i]){
        continue;
       }
       ll m=i;
       while(m<=n){
        if(a[m]){
            break;
        }
        a[m] = 1;
        solve.push_back(m);
        m *= 2;
       }
    }
    for(int it : solve){
        cout<<it<<" ";
    }
    cout<<"\n";
 
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