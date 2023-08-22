//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll a, b, c;
    cin>>a>>b>>c;
    ll x = c / 2;
    if (c % 2 == 1) {
        b = b + x;
        a = (a + x) + 1;
    } else {
        b = b + x;
        a = a + x;
    }
    if (a <= b)
        cout<<"Second"<<'\n';
    else
        cout<<"First"<<'\n';
    
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