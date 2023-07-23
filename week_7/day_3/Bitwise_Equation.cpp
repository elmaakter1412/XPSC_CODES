//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    if(n==0){
        cout<<4<<' '<<6<<" "<<3<<" "<<7<<'\n';
    }
    else{
        ll x=1,y=2,w=0,z=0;
        for(int i=3; i<=1000000; i++){
            ll m = n^i;
            if(i==m || m<=2){
                continue;

            }
            w=i;
            z=m;
            break;
        }
        if(w==0){
            cout<<-1<<'\n';
        }
        else{
            cout<<x<<" "<<y<<" "<<w<<" "<<z<<'\n';
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
