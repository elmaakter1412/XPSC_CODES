//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    vector<ll>a(4);
    ll maxx = INT_MIN;
    for(int i=0; i<4; i++){
        cin>>a[i];
        if(a[i] > maxx){
            maxx = a[i];
        }
    }
    for(int i=0; i<4; i++){
        if(a[i] != maxx){
            cout<<maxx - a[i]<<" ";
        }
    }
   
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