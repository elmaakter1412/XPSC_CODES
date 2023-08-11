//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(n);
    bool flag = 1;
    ll solve = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        solve = solve + a[i];
        if(solve==0){
            flag = 0;
        }

    }
    if(solve==0){
        cout<<"NO"<<'\n';
        return;
    }
    if(flag){
        cout<<"YES"<<'\n';
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        sort(a.begin(), a.end());
        if(solve < 0){
            cout<<"YES"<<'\n';
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"YES"<<'\n';
            for(int i=n-1; i>=0; i--){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
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