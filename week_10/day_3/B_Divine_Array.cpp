//Author: elmaakter14120;

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int b[n+1][n];
   
    for(int i=0; i<n; i++){
        b[0][i] = a[i];
    }
    
    for(int i=1; i<=n; i++){
        map<int, int>mp;

        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }

        for(int j=0; j<n; j++){
            a[j] = mp[a[j]];
            b[i][j] = a[j];
        }
    }

    int qu;
    cin>>qu;
    
    while(qu--){
        int a,c;
        cin>>a>>c;
        a--;
        if(c<=n){
            cout<<b[c][a]<<'\n';
        }
        else{
            cout<<b[n][a]<<'\n';
        }
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