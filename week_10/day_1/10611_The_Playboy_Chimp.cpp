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
    int q;
    cin>>q;
    while(q--){
        int y;
        cin>>y;
        auto it1 = lower_bound(a.begin(), a.end(), y);
        auto it2 = upper_bound(a.begin(), a.end(), y);
        int idx1 = it1-a.begin();
        int idx2 = it2-a.begin();
        if(idx1 == 0){
            cout<<"X ";
        }
        else{
            cout<<a[idx1-1]<<" ";
        }
        if(idx2 == n){
            cout<<"X"<<'\n';
        }
        else{
            cout<<a[idx2]<<'\n';
        }
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