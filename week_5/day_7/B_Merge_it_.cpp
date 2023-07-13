//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;
    vector<ll>a(n+2);
    ll summ = 0, cnt = 0, p=0, q=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] % 3==0){
            cnt++;
        }
        else if(a[i] % 3==1){
            p++;
        }
        else if(a[i] % 3 == 2){
            q++;
        }
        summ = min(p,q);
    }
    cout<<summ+cnt+(p-summ)/3+(q-summ)/3<<"\n";
    
    
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