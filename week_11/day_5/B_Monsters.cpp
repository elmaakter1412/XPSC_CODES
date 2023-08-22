//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool cmp(pair<ll,ll>p, pair<ll,ll>q){
    if(p.first>q.first){
        return true;
    }
    else if(p.first==q.first){
        if(p.second<q.second){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
    
void result(){
    ll n,k;
    cin>>n>>k;

    pair<ll,ll>a[n];
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        a[i].first = x%k;
        if(x<k){
            a[i].first = x%k;
        }
        else if(x%k==0){
            a[i].first = k;
        }
        a[i].second = i+1;

    }
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].second<<" ";
    }
    cout<<"\n";

    
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