//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>c(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    b[0] = a[0];
    for(int i=1; i<n; i++){
        b[i] = b[i-1]+a[i];
    }
    c[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--){
        c[i] = c[i+1]+a[i];
    }
    ll p=0, q=n-1;
    ll mx = 0;
    while(p<q){
        if(b[p] == c[q]){
            mx = max(mx, b[p]);
            p++;
            q--;
        }
        else if(b[p] < c[q]){
            p++;
        }
        else{
            q--;
        }
    }
    cout<<mx<<'\n';

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}