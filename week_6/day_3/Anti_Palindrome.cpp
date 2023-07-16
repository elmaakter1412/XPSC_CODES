//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int palindrom(string str){
    unordered_set<char>ch;

    for(char c: str){
        ch.insert(c);
    }
    ll n = str.size();
    int count = ch.size();

    return n-count;

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        string str;
        cin>>n>>str;

        int result = palindrom(str);
        cout<<result<<"\n";
    }
    return 0;
}