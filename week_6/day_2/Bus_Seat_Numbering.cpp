//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
string seat_numbering(int n){
    string typ;
    int dec = (n-1)/15;
    int seat_dec = (n-1)%15;

    if(dec==0){
        typ = "Lower ";
    }
    else{
        typ = "Upper ";
    }

    if(seat_dec <= 10){
        typ = typ + "Double";
    }
    else if(seat_dec >= 11 && seat_dec <= 15){
        typ = typ + "Single";
    }
    else if(seat_dec >= 16 && seat_dec <= 25){
        typ = typ + "Double";
    }
    else if(seat_dec >= 26){
        typ = typ + "Single";
    }

    return typ;
    

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n;
        cin>>n;
        cout<<seat_numbering(n)<<'\n';
    }
    return 0;
}