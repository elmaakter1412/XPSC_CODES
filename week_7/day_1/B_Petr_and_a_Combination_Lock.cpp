//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int flag = false;
    for(int i=0; i<(1<<n); i++){
        int solve = 0;
        for(int j=0; j<n; j++){
            if((i & (1<<j)) != 0){
                solve = solve + a[j];
            }
            else{
                solve = solve - a[j];
            }
        }
        if(solve % 360==0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    
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