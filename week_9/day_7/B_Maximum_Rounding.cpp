//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string x;
    cin>>x;

    x = "0"+x;
    ll m = x.size();
    ll str = m;
    for(int i=m-1; i>=0; i--){
        if(x[i] >= '5'){
            x[i] = '0';
            str = i;
            int k = i-1;

            while(x[k] == '9'){
                x[k] = '0';
                k--;
            }
            x[k]++;
        }
    }
    for(int i=str; i<m; i++){
        x[i] = '0';
    }
    if(x.front()=='0'){
        x = x.substr(1);
    }
    cout<<x<<'\n';
    
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