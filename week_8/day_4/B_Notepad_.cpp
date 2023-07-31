//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    string str;
    cin>>n>>str;

    set<int>stt;

    stt.insert(str[0]*256+str[1]);
    for(int j=3; j<n; j++){
        if(stt.find(str[j-1] * 256+str[j]) != stt.end()){
            cout<<"Yes"<<'\n';
            return;

        }
        stt.insert(str[j-2] * 256 + str[j-1]);
    }
    cout<<"No"<<'\n';

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