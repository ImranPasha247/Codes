#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve();
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
void solve() {
    int n,k,p;
    cin >>n>>k>>p;
    int maxSum =n*p;
    int minSum =-n*p;
    if (k>maxSum || k<minSum) {
        cout << -1 << endl;
        return;
    }
    int requiredOperations = (abs(k) + p - 1) / p; 
    cout << requiredOperations << endl;
}