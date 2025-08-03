#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(long long n,long long arr[]);
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Insertion_sort(n,arr);
}
void Insertion_sort(long long n,long long arr[]){   
    for(int i=1;i<n-1;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

