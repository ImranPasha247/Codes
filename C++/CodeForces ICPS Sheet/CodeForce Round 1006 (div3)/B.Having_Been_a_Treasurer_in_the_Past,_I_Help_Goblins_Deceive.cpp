#include <bits/stdc++.h>
using namespace std;
int solve();
int main() {
    int a;
    cin >> a;
    while (a > 0) {
        solve();
        a--;
    }
}
int solve() {
    int n;
    string s;
    cin >> n >> s;
    if (n < 3) {
        cout << 0 << endl;
        return 0;
    }
    int dash = 0, underscore = 0;
    for (char c : s) {
        if (c == '-'){ 
            dash++;}
        else if (c == '_') {
        underscore++;}
    }
    int result = min(dash * (dash - 1) / 2, underscore)*n;

    cout << result << endl;
    return result;
}
