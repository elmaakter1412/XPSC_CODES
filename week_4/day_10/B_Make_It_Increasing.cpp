//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    int ans = 0;
    for(int i=n-1; i>=1; i--){
        if(a[i+1] == 0){
            ans = -1; 
            break;
        }

        while(a[i] >= a[i+1]){
            a[i] = a[i] / 2;
            ans++;
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