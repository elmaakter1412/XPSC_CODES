//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll a,b,c;
    cin>>a>>b>>c;

    if(b > c){
        if(((b-c) + (c-1)) > a-1){
            cout<<1<<"\n";
        }
        else if(((b-c) + (c-1)) < a-1){
            cout<<2<<"\n";
        }
        else{
            cout<<3<<"\n";
        }
    }
     else if(b < c){
        if(((c-b) + (c-1)) < a-1){
            cout<<2<<"\n";
        }
        else if(((c-b) + (c-1)) > a-1){
            cout<<1<<"\n";
        }
        else {
            cout<<3<<"\n";
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