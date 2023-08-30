//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    if(n<=3){
        cout<<n<<"\n";
        return;
    }
    int m=0, ans=0, cnt=0;
    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    if(s.size()==2){
        ans = 2;
        int y=n-2;
        ans = ans + (y/2);
        cout<<ans<<'\n';
        
    }
    else{
        cout<<n<<'\n';
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