//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n,k,x;
    cin>>n>>k>>x;

    if(x != 1){
        cout<<"YES"<<'\n';
        cout<<n<<'\n';
        for(int i=0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<'\n';
        return;
    }
    else{
        if(k >= 2 && n%2==0){
            cout<<"YES"<<'\n';
            cout<<n/2<<'\n';
            for(int i=0; i<n/2; i++){
                cout<<2<<" ";
            }
            cout<<'\n';
            return;
        }
        if(k >= 3 && n%2==1){
            cout<<"YES"<<'\n';
            cout<<n/2<<'\n';
            cout<<3<<" ";
            for(int i=0; i<n/2 - 1; i++){
                cout<<2<<" ";
            }
            cout<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';

    
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