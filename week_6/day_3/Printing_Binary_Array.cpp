//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,x;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>x;
        if(x==0){
            cout<<1;
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<"\n";
    
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