//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, p=0;
    cin>>n;

    string str={'a','a','b','b'};
    for(int i=0; i<n; i++){
        cout<<str[p];
        p++;
        if(p==4){
            p=0;
        }

    }
    cout<<"\n";
    
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}