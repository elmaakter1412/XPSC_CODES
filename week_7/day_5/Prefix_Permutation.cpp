//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    ll summ = (n*(n+1))/2;
    if(summ%n==0){
        cout<<-1<<'\n';
    }
    else{
        for(int i=1; i<=n; i+=2){
            cout<<i+1<<' '<<i<<' ';
        }
        cout<<"\n";
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