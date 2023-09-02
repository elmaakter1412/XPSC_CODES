//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin >> n;

    vector<ll>a;

    a.push_back(n);
    if (n%2==1){
        n--;
        a.push_back(n);
    }
    while (n!=2){
        k = 1;
        while(n % (k*2) == 0){
            k = k*2;
        }
        if(k == n){
            k = k/2;
        }
        n = n-k;
        a.push_back(n);
        }
        a.push_back(1);
        cout<<a.size()<<"\n";

        for(auto value: a){
            cout<<value<<" ";
        }
        
        cout<<'\n';
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