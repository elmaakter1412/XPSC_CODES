//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string n;
    cin>>n;

    string pi = "3141592653589793238462643383279";
    ll count = 0;

    int length = min(n.size(), pi.size());
    for(int i=0; i<length; i++){
        if(n[i] == pi[i]){
            count++;
        }
        else{
            break;
        }

    }
    cout<<count<<"\n";
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