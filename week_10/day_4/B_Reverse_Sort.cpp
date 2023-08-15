//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
 
    char ch[1002];
    int a[1002];
 
    cin>>ch+1;
 
    int m=0;
    for(int i=1; i<=n; i++){
        if(ch[i] == '1'){
            m++;
        }
    }
    int count = 0;
    memset(a,0, sizeof a);
    for(int i=1; i<=n; i++){
        if(ch[i]=='1' && i<=n-m){
            a[count++] = i;
        }
        else if(ch[i] =='0' && i>=n-m){
            a[count++] = i;
        }
    }
    if(count==0){
        cout<<0<<'\n';
    }
    else{
        cout<<1<<'\n';
        cout<<count<<" ";
        for(int i=1; i<=count; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
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