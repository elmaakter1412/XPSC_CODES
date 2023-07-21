//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int count(int x){
    int count = 0;
    while(x){
        count+=(x & 1);
        x>>=1;
    }
    return count;
}

    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        int n,m,k;
        cin>>n>>m>>k;

        int a[m+1];

        int ans = 0;
        for(int i=0; i<=m; i++){
            cin>>a[i];
        }
        for(int i=0; i<m; i++){
            if(count(a[i] ^ a[m]) <= k){
                ans++;
            }
        }
        cout<<ans<<"\n";
    return 0;
}