//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n, t;
    cin>>n>>t;
 
    map<int, int>p,q;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(p.find(x) == p.end()){
            p[x] = i;
        }
        q[x] = i;
    }
 
    while(t--){
        int h,k;
        cin>>h>>k;
 
        string s = "YES";
        if(p.find(h) == p.end() || p.find(k) == p.end()){
            s = "NO";
        }
        else if(p[h] > q[k]){
            s = "NO";
        }
        cout<<s<<"\n";
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