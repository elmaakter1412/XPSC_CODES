//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,h,m;
    cin>>n>>h>>m;
 
    int temp = h * 60 + m;
    int ans = 24*60;
 
    while(n--){
        int x,y;
        cin>>x>>y;
 
        int current_temp = x * 60 + y;
        int p = current_temp - temp;
        if(p >= 0){
            ans = min(ans, p);
        }
        else{
            ans = min(ans, 24 * 60 + p);
        }
    }
    cout<<ans / 60<<" "<<ans % 60<<"\n";
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