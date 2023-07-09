//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    int d[4];
    int n = s.size(), DU,LR;
    d[0] = d[1] = d[2] = d[3] = 0;
    for(int i=0; i<n; i++){
        int t;
        if(s[i] == 'L'){
            t = 0;
        }
        if(s[i] == 'R'){
            t = 1;
        }
        if(s[i] == 'D'){
            t = 2;
        }
        if(s[i] == 'U'){
            t = 3;
        }
        d[t]++;
    }

    LR = min(d[0], d[1]);
    DU = min(d[2], d[3]);

    if(min(LR, DU) == 0){
        LR = min(1, LR);
        DU = min(1, DU);
    }
    cout<<LR*2 + DU*2 <<"\n";
    for(int i=1; i<=LR; i++){
        cout<<"L";
    }
    for(int i=1; i<=DU; i++){
        cout<<"D";
    }
    for(int i=1; i<=LR; i++){
        cout<<"R";
    }
    for(int i=1; i<=DU; i++){
        cout<<"U";
    }
    cout<<"\n";

    
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