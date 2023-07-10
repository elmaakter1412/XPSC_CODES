//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int idx = -1;
    for(int i=1; i<n; i++){
        if(v[i] != v[i-1]){
            if(i != (n-1) && v[i] == v[i+1]){
                idx = i-1;
                break;
            }
            else{
                idx = i;
                break;
            }
        }
    }
    cout<<idx+1<<'\n';
    
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