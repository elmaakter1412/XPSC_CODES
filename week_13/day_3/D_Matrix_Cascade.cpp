//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 3000+2;

vector<string>s;
int a[N][N];
int b[N][N];
int cur[N][N];
    
void result(){
    int n;
    cin>>n;
    s.clear();
    s.resize(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] = 0;
            b[i][j] = 0;
            cur[i][j] = 0;
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cur[i][j] = a[i][j] + b[i][j] + (j-1 >= 0 ? cur[i][j-1] : 0);
        }
        for(int j=0; j<n; j++){
            char ch = s[i][j];
            if(cur[i][j] % 2){
                ch = ((ch-'0')^1) + '0';
            }
            if(ch == '1'){
                ans++;
                a[i][j]++;
                if(j+1<n){
                    b[i][j+1]--;
                }
            }
        }

        for(int j=0; j<n; j++){
            if(i+1 >= n){
                break;
            }
            if(j-1>=0){
                a[i+1][j-1] += a[i][j];
            }
            else{
                a[i+1][j] += a[i][j];
            }

            if(j+1<n){
                b[i+1][j+1] += b[i][j];
            }
        }
    }
    cout<<ans<<"\n";
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