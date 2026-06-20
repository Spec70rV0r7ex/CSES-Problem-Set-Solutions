#include "bits/stdc++.h"
using namespace std;

#define int long long
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> ans;
    for(int i = 0; i < (1 << n); i++) {
        int t = i ^ (i >> 1);
        string s = "";
        for(int j = n - 1; j >= 0; j--) {
            s += (t & (1 << j)) ? "1" : "0";
        }
        ans.pb(s);
    }
    for(string s : ans) {
        cout << s << endl;
    }

    return 0;
}
