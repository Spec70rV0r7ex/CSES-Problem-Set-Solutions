#include "bits/stdc++.h"
using namespace std;

#define int long long
#define pb push_back

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
    for (const auto& x : v) out << x << " ";
    return out;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int x = (n * (n + 1)) / 2;
    if (x % 2) {
        cout << "NO\n";
        return 0;
    }
    x /= 2;
    cout << "YES\n";
    vector<int> v1, v2;
    for(int i = n; i > 0; i--) {
        if(x >= i){
            v1.pb(i);
            x -= i;
        }
        else {
            v2.pb(i);
        }
    }
    cout << v1.size() << '\n';
    cout << v1 << '\n';
    cout << v2.size() << '\n';
    cout << v2 << '\n';

    return 0;
}
