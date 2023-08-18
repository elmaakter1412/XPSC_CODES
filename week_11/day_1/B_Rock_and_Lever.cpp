//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll>a(1000000);
    
void result(){
    ll n;
    cin>>n;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll solve = 0;
    for(int j=29; j>=0; j--){
        ll count=0;
        for(int i=0; i<n; i++){
            if(a[i] >= (1<<j) && a[i] < (1<<(j+1))){
                count++;
            }
        }
        solve = solve + count*(count-1)/2;
    }
    cout<<solve<<"\n";
    
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