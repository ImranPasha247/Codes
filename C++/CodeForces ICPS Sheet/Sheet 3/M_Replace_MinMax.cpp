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
    long long mn,mx;
    mn=v.front();
    mx=v.back();
    for(int i=0;i<n;i++){
        if(mn==arr[i]){
            arr[i]=mx;
        }else if(mx==arr[i]){
            arr[i]=mn;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}