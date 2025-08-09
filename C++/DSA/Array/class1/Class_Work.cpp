// To find the smallest and the largest element of the array
#include<bits/stdc++.h>
using namespace std;
void smallest_largest(int arr[],int size){
    int small=arr[0],large=arr[0];
    for(int i=0;i<size-1;i++){
        if(small>arr[i+1]){
            small=arr[i+1];
        }

        if(large<arr[i+1]){
            large=arr[i+1];
        }
    }
    cout<<"Smallest: "<<small<<" "<<"Largest: "<<large;
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    smallest_largest(arr,n);
    return 0;
}