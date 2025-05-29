#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={34,56,54,32,67,89,90,32,21};
    int x=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<x/2;i++){
         int temp = arr[i];
        arr[i] = arr[x - 1 - i];
        arr[x - 1 - i] = temp;
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}