//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int count_diff(string ss, string sss){
    int n = ss.size();
 
    int count = 0;
    for(int i=0; i<n; i++){
        int x = ss[i] - 'a';
        int y = sss[i] - 'a';
        count = count + abs(x-y);
    }
    return count;
 
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
 
        int n,m;
        cin>>n>>m;
 
        vector<string>s(n);
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
 
        int minimum = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int count = count_diff(s[i], s[j]);
 
                if(count <= minimum){
                    minimum = count;
                }
            }
        }
        cout<<minimum<<"\n";
    }
    return 0;
}