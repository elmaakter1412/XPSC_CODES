//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    ll n = s.size();
    vector<ll>index[26];
    for(int i=1; i<n-1; i++){
        index[s[i] - 'a'].push_back(i);
    }

    ll first = s[0] - 'a', last = s.back() - 'a';
    ll minn = min(first, last);
    ll maxx = max(first, last);

    vector<ll>order;
    for(int i=0; i<26; i++){
        if(minn <= i && maxx >= i){
            for(int t: index[i]){
                order.push_back(t+1);
            }
        }
    }

    if(first > last){
        reverse(order.begin(), order.end());
    }
    ll cost = abs(first - last);
    ll jump = order.size() + 2;
    cout<<cost<<" "<<jump<<"\n";

    cout<<1<<" ";
    for(int i: order){
        cout<<i<<" ";
    }
    cout<<n<<"\n";

    
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