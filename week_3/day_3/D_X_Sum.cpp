//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>>a(n, vector<ll>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    ll maxx = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ll sum = a[i][j];
            for(int p = 1; i-p >= 0 && j-p >= 0; p++){
                sum = sum + a[i-p][j-p];

            }
            for(int p=1; i-p >=0 && j+p < m; p++){
                sum = sum + a[i-p][j+p];

            }
            for(int p=1; i+p < n && j-p >= 0; p++){
                sum = sum + a[i+p][j-p];
            }
            for(int p=1; i+p < n && j+p < m; p++){
                sum = sum + a[i+p][j+p];
            }
            maxx = max(maxx, sum);
        }
    }
    cout<<maxx<<"\n";
    
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