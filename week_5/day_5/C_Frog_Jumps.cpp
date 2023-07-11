//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string a;
    cin>>a;

    ll maxx = 0;
    while(a.size() > 0){
        int x = a.find("R");
        if(x==-1){
            if(a.size() > maxx){
                maxx = a.size();
            }
            break;
        }
        if(x > maxx){
            maxx = x;
        }
        a = a.substr(x+1);
    }
    cout<<maxx+1<<endl;
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