//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int t[101];
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<101;i++){
		for(int j=0;j<n;j++){
			if(a[j]>i+1){
				t[i]+=a[j]-i-1;
			}
			else if(a[j]<i-1){
				t[i]+=i-a[j]-1;
			}
		}
	}
	int m=100000;
	int r=0;
	int k=0;
	for(r=0;r<101;r++){
		if(t[r]<=m){
			m=t[r];
			k=r;
		}
	}
	cout<<k<<" "<<m;
 
    
    return 0;
}