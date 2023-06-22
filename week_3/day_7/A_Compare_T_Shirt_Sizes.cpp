//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string x,y;
    cin>>x>>y;

    int x_a = x.size()-1, y_b = y.size()-1;
    char x_c = x[x.size() - 1], y_c = y[y.size() - 1];
    if(x_c == 'S' && y_c != 'S'){
        cout<<"<"<<endl;
    }
    else if(x_c != 'S' && y_c == 'S'){
        cout<<">"<<endl;
    }
    else if(x_c == 'S' && y_c == 'S'){
        if(x_a > y_b){
            cout<<"<"<<endl;
        }
        else if(x_a == y_b){
            cout<<"="<<endl;
        }
        else{
            cout<<">"<<endl;
        }
    }
    else if(x_c == 'L' && y_c != 'L'){
        cout<<">"<<endl;
    }
    else if(x_c != 'L' && y_c == 'L'){
        cout<<"<"<<endl;
    }
    else if(x_c == 'L' && y_c == 'L'){
        if(x_a > y_b){
            cout<<">"<<endl;
        }
        else if(x_a == y_b){
            cout<<"="<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }
    else if(x_c == 'M' && y_c == 'M'){
        cout<<"="<<endl;
    }

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}