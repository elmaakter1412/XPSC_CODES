//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
string water_filling(int a, int b, int c){
    int cnt = 0;
    if(a==0){
        cnt++;
    }
    if(b==0){
        cnt++;
    }
    if(c==0){
        cnt++;
    }

    if(cnt >= 2){
        return "Water filling time";
    }
    else{
        return "Not now";
    }
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int a,b,c;
        cin>>a>>b>>c;

        string result = water_filling(a,b,c);
        cout<<result<<'\n';
    }
    return 0;
}