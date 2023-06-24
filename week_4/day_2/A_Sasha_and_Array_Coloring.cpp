//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    ll sum = 0;

    for(int i=0; i<n/2; i++){
        sum = sum + abs(a[i] - a[n-i-1]);
    }
    cout<<sum<<"\n";
    
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