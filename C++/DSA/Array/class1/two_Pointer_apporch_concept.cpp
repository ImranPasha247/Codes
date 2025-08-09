// Two pointer approch concept by reversing the the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}