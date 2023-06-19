//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>frq(n+1, 0);
    ll array[n][n-1];

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cin>>array[i][j];
        }
        frq[array[i][0]]++;

    }

    int k = -1;
    for(int i=1; i<=n; i++){
        if(frq[i] == n-1){
            k = i;
        }
    }
    cout<<k<<" ";
    for(int i=0; i<n; i++){
        if(array[i][0] != k){
            for(int j=0; j<n-1; j++){
                cout<<array[i][j]<<" ";
            }
            
        }
    }
    cout<<"\n";
    
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