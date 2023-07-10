//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<string>a(n-2);
    for(int i=0; i<n-2; i++){
        cin>>a[i];
    }
    bool found = false;
    string solved = "";
    for(int i=0; i<n-2; i++){
        if(i==0){
            solved = solved + a[i];
        }
        else if(a[i][0] == a[i-1][1] && i==n-3 && !found){
            solved = solved + a[i][1];
            solved = solved + a[i][1];
        }
        else if(a[i][0] == a[i-1][1] && i<n-2){
            solved = solved + a[i][1];
        }
        else if(a[i][0] != a[i-1][1]){
            solved = solved + a[i];
            found = true;
        }
    }
    if(solved.size() < n){
        solved = solved + solved[solved.size()-1];
    }
    cout<<solved<<"\n";
    
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