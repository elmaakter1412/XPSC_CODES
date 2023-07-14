//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    
    vector<int>a;
    int p = -1, q = -1;
    for(int i=0; i<n; i++){
        if(i-1 >0){
            p = abs(v[i] - v[i-1]);
        }
        if(i+1 < n){
            q = abs(v[i] - v[i+1]);
        }
        a.push_back(max(p,q));
    }

    int minn = INT_MAX;
    for(int i=0; i<n; i++){
        minn = min(minn, a[i]);
    }
    cout<<minn<<'\n';
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