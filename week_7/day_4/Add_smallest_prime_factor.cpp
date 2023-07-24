//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int x,y;
    cin>>x>>y;

    ll count = 0;
    if(x==3 || x==5 || x==7){
        x +=x;
        count++;
    }
    else if(x==9){
        x+=3;
        count++;
    }
    cout<<(y-x+1)/2+count<<"\n";
    
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