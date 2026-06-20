#include "bits/stdc++.h"
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    string ans(n, ' ');

    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) {
            odd++;
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION\n";
    }
    else {
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (freq[s[i] - 'A'] % 2 == 1) {
                ans[n / 2] = s[i];
                freq[s[i] - 'A']--;
            }
            while (freq[s[i] - 'A'] > 0) {
                ans[l++] = ans[r--] = s[i];
                freq[s[i] - 'A'] -= 2;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
