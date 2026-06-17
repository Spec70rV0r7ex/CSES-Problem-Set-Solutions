#include "bits/stdc++.h"
using namespace std;

#define int long long
int MOD = 1e9 + 7;

// iterative method of binary exponentiation of a ^ b mod N
int power (int a, int b, int N) {
    int ans = 1;
    while(b) {
        if(b & 1LL) {
            ans = (ans * a) % N;
        }
        a = (a * a) % N;
        b >>= 1LL;
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << power(2LL, n, MOD) << '\n';
    return 0;
}
