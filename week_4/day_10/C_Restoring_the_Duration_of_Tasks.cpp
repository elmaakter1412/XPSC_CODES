//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);
    vector<ll>b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    ll finished = 0;
    for(int i=0; i<n; i++){
        int m = min(b[i] - a[i], b[i] - finished);
        cout<<m<<" ";
        finished = b[i];
    }
    cout<<"\n";
    
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