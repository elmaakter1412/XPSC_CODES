//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    ll maxx = INT_MIN;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>solve;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        maxx = max(a[i]-b[i], maxx);
    }
    for(int i=0; i<n; i++){
        if(a[i] - b[i] == maxx){
            solve.push_back(i+1);
        }
    }
    sort(solve.begin(), solve.end());
    cout<<solve.size()<<"\n";

    for(auto it : solve){
        cout<<it<<" ";
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