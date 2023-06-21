//Author: elmaakter14120;

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    string s = "";
    for (int i = 0; i < 100;i++){
        s += "Yes";
    }
    while (t--)
    {
        string m;
        cin >> m;
        int n;
        n = m.size();
        bool isSub = false;
 
        for (int j = 0; j < s.size();j++){
            if(j+n-1 < s.size() && s.substr(j,n) == m){
                isSub = true;
                break;
            }
        }
        if(isSub){
            cout << "YES" << endl;
        }else{
            cout << "NO"<<endl;
        }
    }
 
    return 0;
}