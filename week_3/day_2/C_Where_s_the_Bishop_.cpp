//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
 
    vector<string>s(9);
 
    int row, colum;
    for(int i=1; i<=8; i++){
        cin>>s[i];
    }
 
    for(int i=1; i<=8; i++){
        bool isfound = false;
        for(int j=0; j<8; j++){
            if(s[i][j] == '#' && (j+2 < 8)){
                if(s[i][j+2] == '#'){
                    row = i+1;
                    colum = j+2;
                    isfound = true;
                    break;
                }
            }
        }
        if(isfound){
            break;
        }
    }
    cout<<row<<" "<<colum<<"\n";
    
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