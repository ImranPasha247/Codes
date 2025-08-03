#include<bits/stdc++.h>
using namespace std;
void Selection_sort(long long n,long long arr[]);
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Selection_sort(n,arr);
}
void Selection_sort(long long n,long long arr[]){   
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        long long min_index=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
                swapped=true;
            }
        }
        if(!swapped){break;}
        swap(arr[i],arr[min_index]);
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

