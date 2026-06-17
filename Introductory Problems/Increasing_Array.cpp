#include "bits/stdc++.h"
using namespace std;

#define int long long

template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    vector<int> v(n, 0);
    cin >> v;
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i - 1]) {
            ans += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    cout << ans << '\n';

    return 0;
}
