#include <iostream>
#include <string>

std::string findMinimumString(const std::string& U) {
    std::string S;
    for (char ch : U) {
        S.push_back(ch);
        int n = S.size();
        if (n >= 3 && S[n - 1] == S[n - 2] && S[n - 2] == S[n - 3]) {
            S.pop_back();
            S.pop_back();
            S.pop_back();
        }
    }
    return S;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;
        std::string U;
        std::cin >> U;

        std::string result = findMinimumString(U);
        std::cout << result << std::endl;
    }

    return 0;
}
