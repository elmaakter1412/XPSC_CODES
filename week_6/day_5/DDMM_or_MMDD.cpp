//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string str;
    cin>>str;
    int a,b,c,d;
    a = (int)(str[0] - 48);
    b = (int)(str[1] - 48);
    c = (int)(str[3] - 48);
    d = (int)(str[4] - 48);

    ll solved = 10 * a+b;
    ll solved2 = 10 * c+d;

    if(solved > 12){
        cout<<"DD/MM/YYYY"<<"\n";
    }
    else{
        if(solved2 > 12){
            cout<<"MM/DD/YYYY"<<'\n';
        }
        else{
            cout<<"BOTH"<<"\n";
        }
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