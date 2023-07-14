//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int a,b,c;
    cin>>a>>b>>c;

    vector<pair<int, int>>paii;
    for(int i=0; i<a; i++){
        int min, lan;
        cin>>min>>lan;

        if(lan==c){
            paii.push_back({min, lan});
        }

    }
    if(paii.size() < b){
        cout<<-1<<'\n';
    }
    else{
        sort(paii.rbegin(), paii.rend());
        int p_size = 0;
        for(int i=0; i<b; i++){
            p_size = p_size + paii[i].first;
        }
        cout<<p_size<<'\n';
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