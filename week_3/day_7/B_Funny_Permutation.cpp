//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    if(n==3 || n==1){
        cout<<-1<<endl;
        return;
    }
    if(n%2 == 0){
        for(int i=n; i>=1; i--){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<n<<" "<<n-1<<" ";
    for(int j=1; j<=n-2; j++){
        cout<<j<<" ";
    }
    cout<<endl;
    
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