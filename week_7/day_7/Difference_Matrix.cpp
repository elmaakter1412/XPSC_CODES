//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    int a=1, b=2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a<=n*n){
                cout<<a<<' ';
                a+=2;
            }
            else{
                cout<<b<<' ';
                b+=2;
            }
        }
        cout<<'\n';
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