//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int x;
    cin>>x;

    int chef_age = 20;
    int chefina_age = 10;
    int chef_age_later = x-chef_age;
    int chefina_age_later = chefina_age+chef_age_later;
    cout<<chefina_age_later<<'\n';
    
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