// calculating the sum & product of an array
#include<bits/stdc++.h>
using namespace std;
void sum_product(int arr[], int size){
    int sum=0,product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum of all the elements of the array is: "<<sum<<endl;
    cout<<"Product of all the elements of the array is: "<<product<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum_product(arr,n);
    return 0;
}
