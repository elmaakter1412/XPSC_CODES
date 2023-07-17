//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result(){
    ll n;
    string s;

    cin>>n>>s;
    int freq[26] = {0};
    ll count1 = 0, count2 = 0, count3 = 0;
    for(int i=0; i<n; i++){
        freq[s[i]-'a']++;
    }

    if(n & 1){
        for(int i=0; i<26; i++){
            if(freq[i] != 0){
                if(freq[i] & 1){
                    count2++;
                }
                else{
                    count3++;
                }
            }
        }
        if(count2 > 1){
            cout<<0<<'\n';
        }
        else if(count2 == 1 && count3 >= 1){
            cout<<1<<"\n";
        }
        else if(count2 == 1 && count3 == 0){
            cout<<2<<"\n";
        }

    }
    else{
        for(int i=0; i<26; i++){
            if(freq[i] != 0){
                if(freq[i] & 1){
                    count1++;
                }
            }
        }
        if(count1 >= 1){
            cout<<0<<"\n";
        }
        else{
            cout<<1<<'\n';
        }
    }
    
    
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