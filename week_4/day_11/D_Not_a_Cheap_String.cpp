//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string w;
    ll p;
    cin>>w>>p;

    ll cost = 0;

    ll n = w.size();

    for(int i=0; i<n; i++){
        int m = w[i] - 'a';
        cost += m + 1;
    }

    string m = w;
    sort(m.begin(), m.end());
    unordered_map<char, int>ump;

    for(int i=n-1; i>=0; i--){
        if(cost <= p){
            break;
        }
        cost -= m[i] - 'a' + 1;
        ump[m[i]]++;
    }

    for(int i=0; i<n; i++){
        if(ump[w[i]] > 0){
            ump[w[i]]--;
            continue;
        }
        cout<<w[i];
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