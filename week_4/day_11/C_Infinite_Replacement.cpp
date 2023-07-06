//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll m){
    ll p = 1;
    for(int i=0; i<m; i++){
        p = p*2;
    }
    return p;

}
    
void result(){
    string s,a;
    cin>>s>>a;

    ll s_n_sz = s.size();
    ll a_n_sz = a.size();

    if(a_n_sz == 1){
        if(a[0] == 'a'){
            cout<<1<<"\n";
        }
        else{
            cout<<power(s_n_sz)<<"\n";
        }
    }
    else{
        sort(a.begin(), a.end());
        if(a[0] == 'a'){
            cout<<-1<<"\n";
        }
        else{
            cout<<power(s_n_sz)<<"\n";
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