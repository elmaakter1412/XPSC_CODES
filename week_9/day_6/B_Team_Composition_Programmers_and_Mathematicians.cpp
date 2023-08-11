//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll x,y;
    cin>>x>>y;

    if(x < y){
        swap(x,y);
    }
    ll solve = 0;
    if((x+y) >= 4 && x > 0 && y > 0){
        if(y*3 <= x){
            solve = y;
        }
        else{
            solve = (x+y)/4;
        }
    }
    else{
        solve = 0;
    }
    cout<<solve<<'\n';
    
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