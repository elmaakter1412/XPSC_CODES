//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,x,y;
    cin>>n>>x>>y;

    if((x <= n/2 && y > n/2) || (x == n/2 + 1 && y == n/2)){
        cout<<x<<' ';
        for(int i=n; i>n/2; i--){
            if(i != x && i != y){
                cout<<i<<' ';
            }
        }
        for(int i=1; i<= n/2; i++){
            if(i != x && i != y){
                cout<<i<<' ';
            }
        }
        cout<<y<<'\n';

    }
    else{
        cout<<-1<<'\n';
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