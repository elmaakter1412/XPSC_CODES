//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,x,y;
    cin>>n>>x>>y;

    char ch[n+1]  = "";
    for(int i=0; i<n; i++){
        ch[i] = char(97+(i%y));
    }
    cout<<ch<<"\n";

    
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