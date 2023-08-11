//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
 
    vector<int>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int odd_cnt = 0, even_cnt = 0;
    for(int i=0; i<n; i++){
        if(A[i]%2==0){
            even_cnt++;
        }
        else{
            odd_cnt++;
        }
    }
 
    if(odd_cnt==0 && even_cnt==0){
        cout<<"NO"<<'\n';
    }
    else if(even_cnt%2==0 && odd_cnt%2==0){
        cout<<"YES"<<'\n';
    }
    else if(odd_cnt%2==0){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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