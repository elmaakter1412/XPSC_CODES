//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n, m, k, h;
    cin >> n >> m >> k >> h;

    vector<int>a(n);
    int count = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        int escalator = abs(h - x);
        if (escalator % k == 0 && (escalator / k) < m && x != h){
            count++;
        }
    }
    cout<<count<<'\n';
    
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