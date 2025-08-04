#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,or_sum=0,and_sum=0;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            or_sum+=(arr[i]|arr[j]);
            and_sum+=(arr[i]&arr[j]);
        }
    }
    cout<<or_sum<<" "<<and_sum<<endl;
}