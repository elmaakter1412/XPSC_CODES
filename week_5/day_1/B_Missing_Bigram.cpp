//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int m = s.size();

    for(int i=1; i<n-2; i++){
        string ss;
        cin>>ss;
        if(ss[0] != s[m - 1]){
            s = s + ss;
        }
        else{
            s = ss[1];
        }
    }

    while(m < n){
        s = s + 'a';
    }
    cout<<s<<"\n";
    
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