//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 1; i <= t; i++){
        int N, K;
        cin >> N >> K;

        string x, y;
        x = s.substr(0, N);
        y = x;
        cout << "Case " << i << ":" << '\n';
        for (int i = 1; i <= K; i++){
            cout << x << '\n';
            next_permutation(x.begin(), x.end());
            if (x == y) break;
        }
    }
    return 0;
}