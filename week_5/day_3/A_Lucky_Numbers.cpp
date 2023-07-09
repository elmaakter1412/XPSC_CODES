//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MAX = 2e5;
    
void result(){
    int l,r;
    cin>>l>>r;

    int value = 0, curr_luck = -1;
    for(int i=l; i<=r; i++){
        string s = to_string(i);
        int new_luck = *max_element(s.begin(), s.end()) - *min_element(s.begin(), s.end());
        if(new_luck >= curr_luck){
            value = i;
            curr_luck = new_luck;
        }
        if(curr_luck == 9){
            break;
        }
    }
    cout<<value<<"\n";
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