//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll x,y;
    cin>>x>>y;
    ll ans,f=0;
    if(y==1){
        ans=1;
        y=2;
        f++;
    }
    else{
       ans=0;
       int min=INT_MAX;
       
       for(int i=y;i>0;i++){
        int s = x;
        while(s > 0){
            s /= y;
            ans++;
            
        }
        if(min >= ans){
            min = ans;
        }
        else{
            break;
        }
        f++;
        ans=f;
        y++;
         
    }
    cout<<min<<"\n";
    }
    
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