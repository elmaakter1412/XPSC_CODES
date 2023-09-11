//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin >> n;
    int a = 1;
    for(int i = 2; i * i <= n; i++){
      if(n % i == 0){
        a = n / i;
        break;
      }
    }
    cout << a << ' ' << n - a << '\n';
    
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