//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
ll calculation(vector<int>& a) {
    ll zeroes = 0, ans = 0;
    for(int i = (int)a.size() - 1; i >= 0; i--){
        if(a[i] == 0){
            zeroes++;
        }
        else{
            ans += zeroes;
        }
    }
    return ans;
}
void result(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans = calculation(a);
    for(int i=0; i<n; i++){
        if(a[i] == 0){
            a[i] = 1;
            ans = max(ans, calculation(a));
            a[i] = 0;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i){
        if(a[i] == 1){
            a[i] = 0;
            ans = max(ans, calculation(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << "\n";
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