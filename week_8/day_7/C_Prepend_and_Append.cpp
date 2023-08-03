//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<=n/2; i++){
            if(i==n/2 && n%2==0){
                cout<<0<<'\n';
            }
            else if(s[i]== s[n-i-1]){
                cout<<n-i-1-i+1<<'\n';
                break;
            }
        }
        result();
    }
    return 0;
}