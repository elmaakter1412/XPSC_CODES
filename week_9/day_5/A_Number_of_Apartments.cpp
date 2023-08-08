//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void result(){
    int n, x=0,y=0,z=0,cnt = 0;
    cin>>n;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            for(int k=0; k<100; k++){
                if(i * 3 + j * 5 + k * 7 == n){
                    x = i;
                    y = j;
                    z = k;
                }
                cnt++;
            }
        }
    }
    if(x==0 && y==0 && z==0){
        cout<<-1<<'\n';
    }
    else {
        cout<<x<<" "<<y<<" "<<z<<'\n';
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