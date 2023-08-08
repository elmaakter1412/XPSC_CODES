//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<ll>a(n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum = sum + a[i];
    }

    if(sum < n){
        cout<<1<<'\n';
    }
    else if(sum >= n){
        cout<<sum - n<<'\n';
    }
    else{
        cout<<0<<'\n';
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