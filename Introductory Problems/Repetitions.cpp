#include "bits/stdc++.h"
using namespace std;

#define int long long

int32_t main() {
    string s;
    cin >> s;
    int ans = 0, temp = 1;
    for(size_t i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            temp++;
        }
        else {
            temp = 1;
        }
        ans = max(ans, temp);
    }
    cout << max(ans, temp) << '\n';

    return 0;
}