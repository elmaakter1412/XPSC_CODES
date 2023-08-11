//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll k;
    int n;
    cin>>n>>k;

    ll count = 0, solve;
    cin>>solve;
    if(k > n-1){
        k = n-1;
    }
    for(int i=1; count<k; i++){
        ll x;
        cin>>x;
        if(x > solve){
            solve = x;
            count = 0;
        }
        count++;
    }
    cout<<solve<<"\n";

    
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