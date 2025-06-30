#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check =true;
    for(int i=0,j=n-1;i<n && j>=0;i++,j--){
        if(i==j){
            break;
        }else if(arr[i]!=arr[j]){
            check=false;
            break;
        }
    }
    if(check==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}