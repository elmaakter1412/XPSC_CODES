//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<ll>x(n);
    vector<ll>y(n);
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        cin>>y[i];
    }

    ll solve = 0;
    for(int i=0; i<n; i++){
        if(x[i] <= 2*y[i] && y[i] <= 2*x[i]){
            solve++;
        }
    }
    cout<<solve<<'\n';
    
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