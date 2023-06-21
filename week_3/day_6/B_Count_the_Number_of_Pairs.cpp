//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n, k;
    cin>>n>>k;

    vector<int>upper(26), lower(26);
    for(int i=0; i<n; i++){
        char c;
        cin>>c;

        if(isupper(c)){
            upper[c-'A']++;

        }
        else{
            lower[c-'a']++;
        }
    }
    int ans = 0;
    for(int i=0; i<26; i++){
        int m = min(upper[i], lower[i]);
        int remain = max(upper[i], lower[i]) - m;
        int t = min(remain / 2, k);
        ans = ans + m + t;
        k = k - t;
    }
    cout<<ans<<"\n";
    
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