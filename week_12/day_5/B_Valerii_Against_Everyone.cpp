//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n, m;
    cin>>n;

    vector<ll>a(n);
    ll count = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m = a[i];
        for(int k=0; k<i; k++){
            if(m==a[k]){
                count++;
                if(count==1){
                    cout<<"YES"<<'\n';
                    break;
                }
                
            }

        }
    }
    if(count==0){
        cout<<"NO"<<'\n';
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