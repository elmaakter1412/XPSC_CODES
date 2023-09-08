//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin >> n;
    vector<int>d,s;
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int p, q;
        cin >> p >> q;
        int x = p + (ceil((float)q / 2)) - 1;
        if (x < ans) {
            ans = x;
        }
    }
    cout << ans << '\n';
    
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