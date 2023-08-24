//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n, x = 0, y = 0;
    cin>>n;

    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        x++;
        if(s[i] != s[i+1]){
            y = max(x,y);
            x = 0;
        }
    }
    cout<<y+1<<'\n';


    
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