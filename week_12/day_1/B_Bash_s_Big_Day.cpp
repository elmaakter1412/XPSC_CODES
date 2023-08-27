//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    int count[100020];

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        count[x]++;

    }
    int solve = 1;
    for(int i=2; i<100005; i++){
        ll total = 0;
        for(int j=i; j<100005; j++){
            total = total + count[j];
        }
        if(total > solve){
            solve = total;
        }
    }
    cout<<solve<<'\n';
    
    return 0;
}