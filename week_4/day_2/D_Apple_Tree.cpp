//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll>a[200005];
ll leaf_node[200005];
bool visited[200005];
ll count_leaf_node(ll src){
    visited[src] = true;
    ll ans = 0;
    bool l = true;
    for(ll i=0; i<a[src].size(); i++){
        if(!visited[a[src][i]]){
            l = false;
            ans = ans + count_leaf_node(a[src][i]);
        }
    }
    if(l){
        return leaf_node[src] = 1;
    }
    else{
        return leaf_node[src] = ans;
    }
}
    
void result(){
    ll n;
    cin>>n;

    ll e = n-1;
    memset(visited, false, sizeof(visited));
    memset(leaf_node, 0, sizeof(leaf_node));
    while(e--){
        ll x,y;
        cin>>x>>y;
        a[x]. push_back(y);
        a[y]. push_back(x);
    }
    ll q;
    count_leaf_node(1);
    cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<leaf_node[a] * leaf_node[b]<<"\n";
    }
    for(ll i=1; i<=n; i++){
        a[i].clear();
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