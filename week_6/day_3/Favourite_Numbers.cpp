//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool even(int n){
    return n%2==0;
}
bool multi_7(int n){
    return n%7==0;
}

bool odd(int n){
    return n%2==1;
}
bool multi_9(int n){
    return n%9==0;
}
    
string favourite_num(int n){
    if(even(n) && multi_7(n)){
        return "Alice";
    }
    else if(odd(n) && multi_9(n)){
        return "Bob";
    }
    else{
        return "Charlie";
    }

}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n;
        cin>>n;

        cout<<favourite_num(n)<<"\n";
    }
    return 0;
}