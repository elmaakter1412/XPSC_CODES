//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    char ch;
    cin>>ch;

    string s;
    cin>>s;

    s = s + s;
    ll count = 0, maxx = 0, flag = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ch){
            flag = 1;

        }
        if(s[i] == 'g'){
            //flag = 0;
            maxx = max(maxx, count);
            count = 0;
        }
        if(flag == 1){
            count++;
        }
    }
    cout<<maxx<<"\n";
    
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