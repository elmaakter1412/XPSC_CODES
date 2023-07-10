//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    ll Even = v[0];
    for(int i=2; i<n; i+=2){
        Even = __gcd(Even, v[i]);
    }
    ll Odd = v[1];
    for(int i=3; i<n; i+=2){
        Odd = __gcd(Odd, v[i]);
    }

    bool bo_even = true;
    for(int i=1; i<n; i+=2){
        if(v[i] % Even == 0){
            bo_even = false;
        }
    }

    bool bo_odd = true;
    for(int i=0; i<n; i+=2){
        if(v[i] % Odd == 0){
            bo_odd = false;
        }
    }

    if(bo_odd){
        cout<<Odd<<'\n';
    }
    else if(bo_even){
        cout<<Even<<"\n";
    }
    else{
        cout<<0<<"\n";
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