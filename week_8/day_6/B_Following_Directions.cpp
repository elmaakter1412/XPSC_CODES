//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    string s;
    cin>>n>>s;

    int left = 0, right = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'U'){
            right = right+1;
        }
        else if(s[i] == 'R'){
            left = left+1;
        }
        else if(s[i]== 'D'){
            right = right - 1;
        }
        else if(s[i]=='L'){
            left = left-1;
        }

        if(right==1 && left==1){
            cout<<"Yes"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
    
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