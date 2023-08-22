//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b,c;
    cin>>a>>b>>c;
 
    int k = c+b;
    if(a>k){
        cout<<2*k+1<<'\n';
    }
    else{
        cout<<2*a-1<<'\n';
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