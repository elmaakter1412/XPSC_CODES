//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    bool flag = 0;
    for(int i=1; i<n; i++){
        if(a[i]-a[i-1] > 1){
            flag = 1;
        }
    }
    if(flag==1){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<'\n';
    }
    
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