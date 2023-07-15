//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(ll n, string str){
    int alice = 0, bob = 0;
    bool alic_sv = true;

    for(int i=0; i<n; i++){
        if(str[i] == 'A'){
            if(alic_sv){
                alice++;
            }
            alic_sv = true;
        }
        else if(str[i] == 'B'){
            if(!alic_sv){
                bob++;
            }
            alic_sv = false;

        }
        
    }
    cout<<alice<<" "<<bob<<" "<<'\n';
   
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;
        string str;
        cin>>str;

        result(n,str);
    }
    return 0;
}