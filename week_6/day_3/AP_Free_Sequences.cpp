//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
bool result(vector<int>&a, int n){
    for(int p=0; p<n-2; p++){
        for(int q=p+1; q<n-1; q++){
            for(int r=q+1; r<n; r++){
                if(a[q]-a[p] == a[r]-a[q]){
                    return false;
                }

            }
        }
    }
    return true;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(result(a,n)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}