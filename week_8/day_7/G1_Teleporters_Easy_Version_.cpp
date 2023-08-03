//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result(){
    int n = 0, c = 0;
        cin>>n>>c;
        vector<int>a(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
 
        for (int i = 0; i < n; i++){
            a[i] = a[i] + i + 1;
        }
        sort(a.begin(), a.end());
        
        int ans = 0;
        for (int i = 0; i <a.size(); i++){
            if (c - a[i] < 0 ){
                break;
            }
            ans +=1;
            c = c - a[i];
        }
 
        cout<<ans<<"\n";
        
    
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