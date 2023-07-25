//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int y;
    cin>>y;

    if(y<=24){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
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