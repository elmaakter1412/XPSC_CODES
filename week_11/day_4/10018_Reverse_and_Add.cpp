//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_palindrome(int n){
    string s = to_string(n);
    int sz = s.length();
    for (int i = 0; i < sz / 2; ++i){
        if (s[i] != s[sz - 1 - i]){
            return false;
        }
    }
    return true;
}

pair<int, int> reverse_and_add(int n){
    int it = 0;
    while (!is_palindrome(n)) {
        int reversed_n = 0;
        int original_n = n;
        while (original_n > 0) {
            reversed_n = reversed_n * 10 + original_n % 10;
            original_n /= 10;
        }
        n = n + reversed_n;
        it++;
    }
    return make_pair(it, n);
}

void result(){
    ll p;
    cin >> p;
    pair<int, int> result = reverse_and_add(p);
    cout<<result.first<<" "<<result.second<<"\n";
    
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