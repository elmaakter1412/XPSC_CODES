//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    reverse(s.begin(), s.end());
    string ans = "";

    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            int x,y,z;
            x = (s[i+1] - '0');
            y = (s[i+2] - '0') * 10;
            z = x + y;

            char ch = (z-1 + 'a');
            ans = ans + ch;
            i+=2;
        }
        else{
            int p = (s[i] - '0');
            char ch = (p-1 + 'a');
            ans = ans + ch;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<'\n';
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