//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    int ara[n];
    for(int i=1; i<=n; i++){
        cin>>ara[i];
    }
    sort(ara+1, ara+n+1);
    
    int solve = 1;
    for(int i=1; i<n; i++){
        if(ara[i+1] - ara[i] == 1){
            solve = 2;
        }
    }
    cout<<solve<<"\n";
    
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