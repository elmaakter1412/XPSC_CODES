//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    ll n = s.size();

    bool FIRST = false, MIDDLE = false, LAST = false;
    for(int i=0; i<n; i++){
        ll y = s[i] - '0';
        if(y%2==0){
            if(i==0){
                FIRST = true;
            }
            else if(i==(n-1)){
                LAST = true;
            }
            else{
                MIDDLE = true;
            }

        }
    }

    if(n==1 && FIRST){
        cout<<0<<"\n";
    }
    else if(LAST){
        cout<<0<<'\n';
    }
    else if(FIRST){
        cout<<1<<'\n';
    }
    else if(MIDDLE){
        cout<<2<<'\n';
    }
    else{
        cout<<-1<<'\n';
    }

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}