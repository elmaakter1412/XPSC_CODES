//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;
    int a[60];
    int b[60] = {0};

    int flag = 1;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    string s;
    cin>>s;

    for(int i=0; i<n; i++){
        if(b[a[i]] != 0 && b[a[i]] != s[i]){
            flag = 0;
            break;
        }
        b[a[i]] = s[i];
    }
    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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