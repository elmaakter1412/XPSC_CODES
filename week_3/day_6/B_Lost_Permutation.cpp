
//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;

int result(){
    int m,s;
    cin>>m>>s;

    vector<bool>v(100 + 1, false);
    int maxx = 0;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        maxx = max(maxx, x);
        v[x] = true;
    }

    for(int i=maxx; i<=100; i++){
        int sum = (i*(i+1)) / 2;
        int t=0;
        for(int j=1; j<=i; j++){
            if(v[j] == true){
                sum = sum - j;
                t++;

            }
        }

        if(s == sum && m == t){
            cout<<"YES"<<"\n";
            return 0;
        }
    }
    cout<<"NO"<<"\n";
    return 0;
}
    

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}