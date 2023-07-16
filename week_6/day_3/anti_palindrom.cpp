//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


    
void result(){
    int n;
    cin>>n;
    int Odd = 0;

    map<char,int>freq;

    set<char>st;

    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        freq[ch]++;
        st.insert(ch);
    }
    if(n%2==0){
        for(char ch='a'; ch<='z'; ch++){
            if(freq[ch]%2!=0 ){
                cout<<0<<"\n";
                return;
            }
        }
        cout<<1<<"\n";
        return;
    }

    if(st.size()==1){
        cout<<2<<"\n";
        return;
    }
    for(char ch='a'; ch='z'; ch++){
        if(freq[ch] & 1){
            Odd++;
        }
    }
    if(Odd>1){
        cout<<0<<"\n";
        return;
    }
    cout<<1<<"\n";
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}