//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll num,k;
    cin>>num>>k;
    ll solved;

    ll ODD_num;
    if(num%2==0){
        ODD_num = num/2;
    }
    else{
        ODD_num = (num/2)+1;
    }

    if(num >= 2*k){
        solved = ODD_num - k;
        if(solved%2==0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    else{
        cout<<"NO"<<'\n';
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