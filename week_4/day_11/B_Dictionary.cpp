//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    ll n = s[0] - 'a';

    ll solve = (n) * 25;

    if(s[0] - 'a' < s[1] - 'a'){
        cout<<solve + s[1] - 'a'<<"\n";
    }
    else{
        cout<<solve + s[1] - 'a' + 1<<"\n";
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