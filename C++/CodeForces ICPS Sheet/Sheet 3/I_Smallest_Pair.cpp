#include<bits/stdc++.h>
using namespace std;
void smallest_pair(){
    int n;
    cin>>n;
    vector <int> v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int sum=arr[i-1]+arr[j-1]+j-i;
            v.push_back(sum);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        smallest_pair();
    }
}