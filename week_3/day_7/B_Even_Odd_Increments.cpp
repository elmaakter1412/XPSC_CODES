//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
		long long n, q,sum=0;
		cin >> n >> q;
		int odd = 0, even = 0, x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x % 2 == 0){
                odd++;
            }
			else{
                even++;
            }
			sum += x;
		}
		long long ty, p;
		while (q--) {
			cin >> ty >> p;
			if (ty == 0) { 
				sum += p * odd;
				if (p % 2 == 1){
                    even += odd,odd = 0;
			}
			else { 
				sum += p * even;
				if (p % 2 == 1){
                    odd += even,even = 0;
			}
			cout << sum << endl;
		    }
	    }
    }
}
return 0;
}