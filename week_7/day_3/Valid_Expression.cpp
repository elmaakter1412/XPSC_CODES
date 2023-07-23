//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin>>n>>k;

    ll cnt = 0;
    if(k<0){
        cnt = n-1;
    }
    else{
        cnt = n+1;
    }

    if(abs(k) > cnt){
        cout<<-1<<'\n';
    }
    else{
        if(k<=0){
            ll p = 1;
            while(n--){
                if(p==k){
                    cout<<'*';
                }
                else{
                    cout<<'-';
                    p--;
                }
            }
        }
        else{
            ll p=1;
            while(n--){
                if(p==k){
                    cout<<'*';
                }
                else{
                    cout<<'+';
                    p++;
                }
            }
        
        }
        
        cout<<"\n";
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