//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin>>n>>k;
    if(k >= n){
        ll q = k/n,inc = 1;
        if(k%n == 0){
            inc = 0;
        }
        cout<<q + inc<<"\n";
        }
        else{
            if (n%k == 0){
                cout<<1;
            }
            else{
                cout<<2;
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