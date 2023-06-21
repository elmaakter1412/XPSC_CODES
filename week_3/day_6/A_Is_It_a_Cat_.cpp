//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.size(); i++){
        if(s[i] == s[i+1]){
            s.erase(i, 1);
            i--;
        }
    }

    if(s == "meow"){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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