#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n;
   cin>>n;
   long long arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<long long>v(arr,arr+n);
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
}