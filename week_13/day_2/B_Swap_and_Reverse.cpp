//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll n,k;
    cin>>n>>k;
 
    string str;
    cin>>str;
 
    if(k%2==0){
        sort(str.begin(), str.end());
        cout<<str<<'\n';
    }
    else{
        string Od = "", Ev = "";
        for(int i=0; i<str.size(); i++){
            if(i%2!=0){
                Od += str[i];
            }
            else{
                Ev += str[i];
            }
        }
        sort(Od.begin(), Od.end());
        sort(Ev.begin(), Ev.end());
 
        string result = "";
        ll p=0,q=0;
        for(int i=0; i<str.size(); i++){
            if(i%2!=0){
                str[i] = Od[p++];
            }
            else{
                str[i] = Ev[q++];
            }
        }
        cout<<str<<'\n';
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