#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);   
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i+=k) {
        int min_val = arr[i];
        for(int j=i; j<i+k && j<n;j++) {
            min_val = min(min_val,arr[j]);
        }
        cout<<min_val<< " ";
    }
    return 0;
}
