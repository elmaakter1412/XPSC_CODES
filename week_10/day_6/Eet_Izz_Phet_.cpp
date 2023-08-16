//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mod = 1e9 + 7;

int hashing(string str, int base){
    int value = 1, ans = 0;
    for(char ch: str){
        int ascii = ch-'a' + 1;
        ans = ans + ((ascii%mod)*(value%mod))%mod;
        ans = ans % mod;

        // mod formula
        //(a*b)%mod = ((a%mod)*(b%mod))%mod

        value = ((value%mod)*(base%mod))%mod;
    }
    return ans;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    set<pair<int, int>>s_p;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;

        s_p.insert({hashing(str,2), hashing(str,3)});
    }
    int m;
    cin>>m;
    while(m--){
        string str;
        cin>>str;
        if(s_p.count({hashing(str,2), hashing(str,3)})> 0){
            cout<<"yes"<<'\n';
        }
        else{
            cout<<"no"<<'\n';
        }
    }


    
    return 0;
}