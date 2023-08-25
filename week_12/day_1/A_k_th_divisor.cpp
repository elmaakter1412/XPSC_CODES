//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;

    vector<long long>a;
    for(int i=1; i<=round(sqrt(n)); i++){
        if(n%i==0){
            a.push_back(i);
            if(n/i > i){
                a.push_back(n/i);
            }
        }

    }
    sort(a.begin(), a.end());
    if(k > a.size()){
        cout<<-1<<'\n';
    }
    else{
        cout<<a[k-1]<<'\n';
    }
    return 0;
}