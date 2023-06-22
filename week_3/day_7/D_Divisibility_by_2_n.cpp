//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
  
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n, x;
        cin >> n;
		vector<int>a(n);
		int cnt = 0, cnt1;
		for (int i = 1; i <= n; i++){
			cin >> x;
			cnt1 = 0;
			while(x % 2 == 0){
				cnt++;
                x = x / 2;
			}
			int y = i;
			while (y % 2 == 0) {
				cnt1++;
                y = y / 2;
			}
			if (cnt1 != 0){
                a.push_back(cnt1);
            }
        }
		sort(a.begin(), a.end());
		int ans = 0;
		for (int i = a.size() - 1; i >= 0 && cnt < n; i--){
			cnt += a[i];
			ans++;
		}
		if(cnt < n){
            cout << -1 << endl;
        }
		else{
            cout << ans << endl;
        }
	}
    return 0;
}
