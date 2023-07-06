//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll a,b,c,x_dogs,y_cats;
    cin>>a>>b>>c>>x_dogs>>y_cats;

    if(a < x_dogs){
        c = c - (x_dogs - a);
    }
    if(b < y_cats){
        c = c - (y_cats - b);
    }
    if(c < 0){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
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