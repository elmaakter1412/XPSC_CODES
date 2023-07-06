//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int s, j=9;
    cin>>s;

    while(s > j){
        s = s-j;
        j--;
    }
    cout<<s;
    for(int i=j+1; i<=9; i++){
        cout<<i;
    }
    cout<<"\n";
    
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
