//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    ll even = 0, odd = 0;
    while(n--){
        ll a;
        cin>>a;
        if(a%2==0){
            even = even + a;
        }
        else{
            odd = odd + a;
        }
    }
    if(even > odd){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
    
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