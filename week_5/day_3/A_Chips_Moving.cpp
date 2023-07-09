//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, x = 0,y = 0;
    cin>>n;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] % 2){
            x++;
        }
        else{
            y++;
        }
    }
    cout<<min(x,y)<<"\n";

    
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}