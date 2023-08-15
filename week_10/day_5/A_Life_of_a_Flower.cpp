//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>a(1e5);
    
void result(){
    int n;
    cin>>n;

    // vector<int>a(n);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ll sum = 1;
    for(int i=1; i<=n; i++){
        if((a[i]==0) && (a[i-1]==0) && (i>1)){
            sum = -1;
            break;

        }
        else if((a[i]==1) && (a[i-1]==1)){
            sum = sum + 5;
        }
        else if((a[i]==1) && (a[i-1]==0)){
            sum++;
        }
    }
    cout<<sum<<'\n';
    
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