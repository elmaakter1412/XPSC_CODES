//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;
        if(n%2!=0){
            cout<<-1<<'\n';
            continue;
        }
        for(int i=n; i>0; i--){
            cout<<i<<" ";
        }
        cout<<'\n';
        result();
    }
    return 0;
}