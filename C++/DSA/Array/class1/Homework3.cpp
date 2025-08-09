// unique Value
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int check=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                check++;

            }
        }
        if(check==1){
            cout<<arr[i]<<" ";
        }
        
    }
    return 0;
}