//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin >> n;
    int size = (n * (n - 1)) / 2;
    vector<int>a;
 
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<int>());
 
    for (int i = 0; i < n - 1; i++) {
        cout << a.back() << ' ';
        for (int j = n - i - 1; j > 0; j--) {
            a.pop_back();
        }
    }
    cout << (int)1e9 << endl;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}