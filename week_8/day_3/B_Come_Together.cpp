//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
 
        xb -= xa;
        yb -= ya;
 
        xc -= xa;
        yc -= ya;
 
        int a = 0,b = 0;
 
            if (xc * xb > 0)
                a = min(abs(xc), abs(xb));
 
            if (yc * yb > 0)
                b = min(abs(yc), abs(yb));
 
        cout << a + b + 1 << endl;
        result();
    }
    return 0;
}