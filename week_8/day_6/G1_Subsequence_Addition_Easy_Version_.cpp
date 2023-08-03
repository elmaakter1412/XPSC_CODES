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
    sort(a.begin(), a.end());
    bool flag = false;

    int solve = 1;
    for(int i=0; i<n; i++){
        if(solve<a[i]){
            flag = true;
        }
        // if(i==0){

        // }
        else{
            solve = solve + a[i];
        }
    }
    if(flag){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
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