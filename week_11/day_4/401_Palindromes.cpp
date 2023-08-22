//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

unordered_map<char, char> mirrorChars = {
    {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'},
    {'L', 'J'}, {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'},
    {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'},
    {'Z', '5'}, {'1', '1'}, {'2', 'S'}, {'3', 'E'}, {'5', 'Z'},
    {'8', '8'}
};

bool isPalindrome(string &str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool isMirrored(string &str) {
    int len = str.length();
    for (int i = 0; i < len / 2 + len % 2; ++i) {
        if (mirrorChars.find(str[i]) == mirrorChars.end() || mirrorChars[str[i]] != str[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    string input;
    while (cin >> input) {
        bool isPalin = isPalindrome(input);
        bool isMirror = isMirrored(input);
        
        cout<<input<<" -- ";
        
        if (!isPalin && !isMirror) {
            cout<<"is not a palindrome."<<" ";
        } else if (isPalin && !isMirror) {
            cout<<"is a regular palindrome."<<" ";
        } else if (!isPalin && isMirror) {
            cout<<"is a mirrored string."<<" ";
        } else {
            cout<<"is a mirrored palindrome."<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}
