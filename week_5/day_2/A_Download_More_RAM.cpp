//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n, t;
    cin>>n>>t;

    vector<pair<int, int>>pii(n);
    for(int i=0; i<n; i++){
        cin>>pii[i].first;
    }
    for(int i=0; i<n; i++){
        cin>>pii[i].second;
    }
    sort(pii.begin(), pii.end());
    
    for(int i=0; i<n; i++){
        if(pii[i] .first <= t){
            t = t + pii[i].second;
        }
        else{
            break;
        }
    }
    cout<<t<<"\n";
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