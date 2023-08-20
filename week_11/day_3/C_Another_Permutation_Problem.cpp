//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){

    int n;
    cin>>n;
    int ans = -1;
    for(int i=1; i<=n; i++){
        for(int pi=1; pi<=n; pi++){
            int maxx = i*pi;
            vector<int>all;
            int cur = 0;
            int cost = 0;
            for(int idx=n; idx>=1; idx--){
                int limit = maxx / idx;
                while(cur < limit && cur <n){
                    cur++;
                    if(cur != pi){
                        all.push_back(cur);
                    }
                }
                if(idx==i){
                    continue;
                }
                if(all.empty()){
                    cost= -1;
                    break;
                }
                cost += (idx * all.back());
                all.pop_back();
            }
            ans = max(ans, cost);
        }
    }
    cout<<ans<<"\n";
    
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