//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(n);
    int sum1 = 0, sum0 = 0;;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 0){
            sum0++;
        }
        else if(a[i] == 1){
            sum1++;
        }
    }
    ll solve = sum1 * (pow(2,sum0));
    cout<<solve<<'\n';
    
    
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