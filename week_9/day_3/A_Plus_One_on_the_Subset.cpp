//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(n);
    int maxx = INT_MIN;
    int minn = INT_MAX;

    for(int i=0; i<n; i++){
        cin>>a[i];
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
    }
    cout<<maxx-minn<<'\n';
    
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