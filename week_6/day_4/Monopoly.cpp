//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool molopoly(int a, int b, int c, int d){
    ll total = a+b+c+d;
    return((a>total-a) || (b>total-b) || (c>total-c) || (d>total-d));
}
    
void result(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(molopoly(a,b,c,d)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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