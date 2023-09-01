//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;
 
    ll solve = 0, x=0, y=0;
    ll n = s.size();
    for(int i=n-1; i>-1; i--){
        if(s[i] == 'A'){
            x++;
        }
        else{
            y++;
        }
        if(x>y){
            solve = solve + (x-y);
            x=0;
            y=0;
        }
        else{
            y = y - x;
            x = 0;
        }
 
    }
    if(y % 2){
        cout<<solve + 1<<"\n";
    }
    else{
        cout<<solve<<'\n';
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