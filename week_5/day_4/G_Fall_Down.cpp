//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b;
    cin>>a>>b;
    string s[a];
    for(int i=0; i<a; i++){
        cin>>s[i];
    }

    for(int i=0; i<b; i++){
        int t = 2550;
        while(t--){
            for(int j=a-2; j>=0; j--){
                if(s[j][i] == '*' && s[j+1][i] == '.'){
                    swap(s[j][i], s[j+1][i]);
                }
            }
        }
    }
    for(int i=0; i<a; i++){
        cout<<s[i]<<"\n";
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