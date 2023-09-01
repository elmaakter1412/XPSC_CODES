//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){

    int n;
	cin>>n;
	map<int,int>mp;
	for(int i=1; i<=n; i++){
		int x;
		cin>>x;
		mp[x]++;
	}
	int ans=0;
	for(int i=2; i<200; i++){
		int result=0;
		for(int j=1; j<i-1; j++){
			result += min( mp[j],mp[i-j]);
		}
		ans=max(ans,result/2);
	}
	cout<<ans<<"\n";
    
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