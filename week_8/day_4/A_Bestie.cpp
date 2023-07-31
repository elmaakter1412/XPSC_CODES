//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

    
void result(){
    
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n;
        cin >> n;
		int an = 0;
		for(int i = 1;i <= n;i++){
			int x;
            cin >> x;
			an = __gcd(an,x);
		}
		if(an == 1){
			cout<<"0\n";
			continue;
		}
		if(__gcd(an,n) == 1){
			cout<<"1\n";
			continue;
		}
		if(__gcd(an,n-1) == 1){
			cout<<"2\n";
			continue;
		}
		cout<<"3\n";
	}
        result();
    return 0;
}