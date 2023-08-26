//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    if(n%2==0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<((j==(n-i-1)) || (i==j))<<" ";
            }
            cout<<'\n';
        }
    }
    else{
        for(int i=0; i<n; i++){
            int x = n/2;
            for(int j=0; j<n; j++){
                cout<<((j==(n-i-1)) || (i==j) || (i==x && j==0) ||(j==x && i==0))<<' ';
            }
            cout<<'\n';
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