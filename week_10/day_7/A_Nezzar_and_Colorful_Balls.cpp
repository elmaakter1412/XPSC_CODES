//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(100);
    int ans = 0;

    for(int i=0; i<n; i++){
        
        int x;
        cin>>x;
        a[x]++;
        ans = max(ans, a[x]);
    }
    cout<<ans<<'\n';


    
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