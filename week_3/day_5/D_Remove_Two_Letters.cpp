//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
void result() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int rep = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i + 1] == s[i - 1]) {
            rep++;
        }
    }
    cout << n - rep - 1 << "\n";
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