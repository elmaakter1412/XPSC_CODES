//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int x;
    cin>>x;

    int battery_level = 0;
    while(x != 50){
        if(x < 50){
            x = x + 2;
        }
        else{
            x = x - 3;
        }
        battery_level++;
    }
    cout<<battery_level<<'\n';
    
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