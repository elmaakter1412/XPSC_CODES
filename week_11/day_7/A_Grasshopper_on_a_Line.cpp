//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, x;
    cin>>n>>x;
    if(n%x != 0){
        if(n < 0){
            cout<<1<<'\n'<<-n<<'\n';
        }
        else{
            cout<<1<<"\n"<<n<<'\n';
        }
    }
    else{
        if(n < 0){
            cout<<2<<'\n';
            cout<<n-1<<" "<<-1<<'\n';
        }
        else{
            cout<<2<<'\n';
            cout<<n-1<<" "<<1<<'\n';

        }
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