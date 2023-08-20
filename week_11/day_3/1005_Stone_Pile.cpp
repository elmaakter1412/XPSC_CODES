//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> weights(n);
    int totalWeight = 0;

    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
        totalWeight += weights[i];
    }

    vector<bool> possibleWeight(totalWeight + 1, false);
    possibleWeight[0] = true;

    for (int i = 0; i < n; ++i) {
        for (int w = totalWeight; w >= weights[i]; --w) {
            possibleWeight[w] = possibleWeight[w] || possibleWeight[w - weights[i]];
        }
    }

    int minDiff = totalWeight;

    for (int w = 0; w <= totalWeight; ++w) {
        if (possibleWeight[w]) {
            int diff = abs(totalWeight - 2 * w);
            minDiff = min(minDiff, diff);
        }
    }

    cout << minDiff << endl;
    
    
    return 0;
}