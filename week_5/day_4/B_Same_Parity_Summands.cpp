//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin>>n>>k;

    ll even = n, odd = n;
    bool even_p = false, odd_p = false;
    even = even - ((k-1)*2);
    odd = odd - (k-1);
    if(even > 0 && even % 2==0){
        even_p = true;
    }
    else if(odd > 0 && odd % 2==1){
        odd_p = true;
    }

    if(!even_p && !odd_p){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        even = n;
        odd = n;
        if(even_p){
            for(int i=0; i<k-1; i++){
                cout<<2<<" ";
                even = even - 2;
            }
            cout<<even<<"\n";
        }
        else if(odd_p){
            for(int i=0; i<k-1; i++){
                cout<<1<<" ";
                odd = odd -1;
            }
            cout<<odd<<"\n";
        }
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