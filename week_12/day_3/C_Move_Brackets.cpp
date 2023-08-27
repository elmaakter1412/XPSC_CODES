//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    string str;
    cin>>n>>str;

    ll a=0, b=0;
    for(int i=0; i<n; i++){
        if(str[i] == '('){
            a++;
        }
        else if(str[i] == ')' && a > 0){
            a--;
        }
        else if(str[i] == ')' && a==0){
            b++;
        }
    }
    cout<<b<<'\n';
    
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