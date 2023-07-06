//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    ll maxx = 0;
    for(int i=0; i<k; i++){
        if(s[i] == 'B'){
            maxx++;
        }
    }

    ll i=1, j=k, count = maxx;

    while(j<n){
        if(s[i-1] == 'B'){
            count--;
        }
        if(s[j] == 'B'){
            count++;
        }
        if(count > maxx){
            maxx == count;
        }
        i++;
        j++;
    }
    cout<<k-maxx<<"\n";
    
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