//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int m;
        cin>>m;

        if(m <= 10){
            cout<<"Lower Double";
        }
        else if((m >= 11) && (m <= 15)){
            cout<<"Lower Single";
        }
        else if((m >= 16) && (m <= 25)){
            cout<<"Upper Double";
        }
        else if(m >= 26){
            cout<<"Upper Single";
        }
        cout<<"\n";
    }
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}