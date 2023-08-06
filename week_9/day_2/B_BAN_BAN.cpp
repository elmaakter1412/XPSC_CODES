//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
	cin>>n;
	ll m = (n + 1) / 2;
	n = n * 3;
	cout<<m<<"\n";
	int i = 2;
	while(i < n){
        cout<<i<<" "<<n<<"\n";
        n = n-3;
        i = i+3;
    }
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