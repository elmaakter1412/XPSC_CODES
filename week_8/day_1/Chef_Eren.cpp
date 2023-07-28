//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,x,y;
    cin>>n>>x>>y;
    ll summ = 0;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            summ = summ + x;
        }
        else{
            summ = summ + y;
        }
    }
    cout<<summ<<'\n';
    
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