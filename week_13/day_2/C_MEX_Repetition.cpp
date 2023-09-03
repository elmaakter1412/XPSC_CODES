//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,k;
    cin>>n>>k;
    k%=(n+1);

    vector<int>a(n);
    vector<bool>visited(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        visited[a[i]] = 1;
    }

    int m = -1;
    for(int i=0; i<=n; i++)
        if(visited[i]==0)
            m = i;

    deque<int>dq(a.begin(),a.end());

    for(int i=0; i<k; i++)
    {
        int value = m;
       
        dq.push_front(value);
        m = dq.back();
        dq.pop_back();
    }

    for(int i=0; i<dq.size(); i++){
        cout<<dq[i]<<" ";
    }
    cout<<"\n";
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