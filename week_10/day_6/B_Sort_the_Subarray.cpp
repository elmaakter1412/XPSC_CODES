//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll>a(200010);
vector<ll>b(200010);
    
void result(){
    ll n;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }
    ll left = 1, right = n;
    while(a[left] == b[left]){
        left++;
    }
    while(a[right] == b[right]){
        right--;
    }

    while(left>1 && b[left-1] <= b[left]){
        left--;
    }
    while(right<n && b[right] <= b[right+1]){
        right++;
    }
    cout<<left<<" "<<right<<'\n';
    
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