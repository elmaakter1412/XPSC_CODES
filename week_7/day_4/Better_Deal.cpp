//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b;
    cin>>a>>b;

    int store_sell = 100-a;
    int second_strore_sell = 200 -(b*2);
    if(store_sell<second_strore_sell){
        cout<<"First"<<'\n';
    }
    else if(store_sell>second_strore_sell){
        cout<<"second"<<'\n';
    }
    else{
        cout<<"both"<<'\n';
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