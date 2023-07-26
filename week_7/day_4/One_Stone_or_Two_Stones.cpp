//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll a,b;
    cin>>a>>b;

    ll difference = abs(a-b);
    if(difference >= 2){
        if(a>b){
            cout<<"CHEF"<<'\n';
        }
        else{
            cout<<"CHEFINA"<<'\n';
        }
    }
    else{
        if(a==b){
            if(a%2){
                cout<<"CHEF"<<'\n';
            }
            else{
                cout<<"CHEFINA"<<'\n';
            }
        }
        else{
            ll minn = min(a,b);
            if(minn%2){
                cout<<"CHEF"<<'\n';
            }
            else{
                cout<<"CHEFINA"<<'\n';
            }
        }
    }
    
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