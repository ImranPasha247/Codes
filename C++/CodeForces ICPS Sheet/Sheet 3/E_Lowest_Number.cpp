#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long check=arr[0];
    for(int i=0;i<n;i++){
        if(check>arr[i]){
            check = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(check==arr[i]){
            cout<<check<<" "<<i+1<<endl;
            break;
        }
    }

}