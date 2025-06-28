#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    long long arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i]; 
    }
    for(int i=0;i<t;i++){
        if(arr[i]<=10){
         cout<<"A["<<i<<"]"<<" = "<<arr[i]<<endl;
        }
    }
}