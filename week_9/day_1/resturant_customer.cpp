//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
    map<int, ll>prefix;

    for(int i=1; i<=n; i++){
        int left, right;
        cin>>left>>right;
        prefix[left]++;
        prefix[right+1]--;
    }
    ll sum = 0, solve  = 0;
    for(auto it: prefix){
        auto idx= it.first ;
        auto value= it.second;
        sum += value;
        solve = max(solve, sum);
    }
    cout<<solve<<'\n';

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}