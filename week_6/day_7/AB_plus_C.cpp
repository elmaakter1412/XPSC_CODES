//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1e6;
    
void result(){
    ll n;
    cin>>n;
    if(n > 1){
        if(n <= N){
            cout<<1<<" "<<1<<" "<<n-1<<"\n";
        }
        else if(n > N && n % 1000000 != 0){
            cout<<1000000<<" "<<n/1000000<<" "<<n%1000000<<"\n";
        }
        else{
            cout<<1000000<<" "<<n/1000000-1<<" "<<1000000<<"\n";
        }
    }
    else{
        cout<<-1<<'\n';
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