//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,m;
    cin>>n>>m;

    vector<ll>a(n),b(m);
    priority_queue<int, vector<ll>,greater<ll>>p;
    for(int i=0; i<n; i++){
        int y;
        cin>>y;
        p.push(y);
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int q=0;
    while(q<m){
        p.pop();
        p.push(b[q]);
        q++;
    }
    ll sum = 0;
    while(p.size()){
        sum = sum + p.top();
        p.pop();

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