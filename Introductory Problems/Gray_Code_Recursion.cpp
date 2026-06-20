#include "bits/stdc++.h"
using namespace std;

#define int long long
#define pb push_back

vector<string> gray(int n) {
    if (n == 1) {
        return {"0", "1"};
    }
    vector<string> ans = gray(n - 1);
    for (int i = ans.size() - 1; i >= 0; i--) {
        ans.pb("1" + ans[i]);
        ans[i] = "0" + ans[i];
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> ans = gray(n);
    for (string i : ans)
        cout << i << "\n";

    return 0;
}
