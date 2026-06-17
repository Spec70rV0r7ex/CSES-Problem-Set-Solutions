#include "bits/stdc++.h"
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    for(int i = 5; i <= n; i *= 5) {
        ans += n / i;
    }
    cout << ans << '\n';
    return 0;
}