#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long num=0;
    for(int i=1;i<=k;i++){
        bool flag= true;
        for(int j=0;j<n;j++){
            if(arr[j]%i!=0){
                flag =false;
                break;
            }
        }
        if(flag==true){num++;}
    }
    cout<<num<<endl;
}