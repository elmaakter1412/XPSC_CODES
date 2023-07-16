//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result(){
    ll n;
    cin>>n;
    
    vector<ll>v(n);
    ll a = -1, b = -1, c = -1;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i] == 1){
            a = i;
        }
        if(v[i] == 2){
            b = i;
        }
        if(v[i] == 3){
            c = i;
        }
    }
    if(a>b){
        if(b>c){
            cout<<b+1<<" "<<c+1<<"\n";
        }
        else if(c>a){
            cout<<a+1<<" "<<c+1<<"\n";
        }
        else{
            cout<<a+1<<" "<<a+1<<"\n";
        }
    }
    else{
        if(b<c){
            cout<<b+1<<" "<<c+1<<"\n";
        }
        else if(c<a){
            cout<<a+1<<" "<<c+1<<"\n";
        }
        else{
            cout<<a+1<<" "<<a+1<<"\n";
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