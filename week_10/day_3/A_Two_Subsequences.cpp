//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    int n = s.size();

    char ch = 'z';
    int idx = -1;

    for(int i=0; i<n; i++){
        if(ch >= s[i]){
            ch = s[i];
            idx = i;
        }
    }
    cout<<ch<<" ";
    for(int i=0; i<n; i++){
        if(i != idx){
            cout<<s[i];
        }
        
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