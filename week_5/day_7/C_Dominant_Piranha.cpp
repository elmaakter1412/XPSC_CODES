//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n;
    cin>>n;

    vector<ll>v(n);
    ll maxx = INT_MIN;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
        maxx = max(maxx, v[i]);
    }
    bool flag = false;
    for(int i=0; i<v.size(); i++){
        if(v[i] == maxx && ((i-1 >= 0 && v[i-1] != maxx) || i+1 < v.size() && v[i+1] != maxx)){
            cout<<i+1<<"\n";
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<-1<<"\n";
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