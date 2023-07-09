//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n, solve = 1, an = 1, p=0;
    cin>>n;

    vector<int>a(105);
    for(int i=0; i<n; i++){
        cin>>a[i];
        p = p + a[i];
    }

    for(int i=1; an<p; i++){
        an = n*i;
        solve = i;
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