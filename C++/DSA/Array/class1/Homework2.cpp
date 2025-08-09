// Swapping max and mins position in the array
#include<bits/stdc++.h>
using namespace std;
int maxium(int arr[],int size){
    int check=arr[0], mx=0;
    for(int i=0;i<size-1;i++){
        if(check<arr[i+1]){
            check=arr[i+1];
            mx=i+1;
        }
    }
    return mx;
}
int minimum(int arr[],int size){
    int check=arr[0],mn=0;
    for(int i=0;i<size-1;i++){
        if(check>arr[i+1]){
            check=arr[i+1];
            mn=i+1;
        }
    }
    return mn;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=maxium(arr,n);
    int mn=minimum(arr,n);
    swap(arr[mn],arr[mx]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}