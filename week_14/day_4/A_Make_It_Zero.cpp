//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin >> n;
 
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    if(n % 2 == 0){
        cout << "2" << endl;
        cout << "1 " << n << endl;
        cout << "1 " << n << endl;
    }
    else{
        cout << "4" << endl;
        cout << "2 " << n << endl;
        cout << "2 " << n << endl;
        cout << "1 " << n - 1 << endl;
        cout << "1 " << n << endl;
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