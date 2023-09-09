//Author: elmaakter14120;

#include<bits/stdc++.h>
using namespace std;

const int  N = 200000;
const int INF = 1e9;
int n,x,ans;
multiset<int> s;
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ans=0;
        for(int i=1; i<=n; i++){
            int a;
            cin>>a;
            s.insert(a);
        }
        while(!s.empty()){
            int a=*s.begin();
            s.erase(s.find(a));
            if(1ll*a*x<=INF && s.count(a*x)){
                s.erase(s.find(a*x));
            }
            else{
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}