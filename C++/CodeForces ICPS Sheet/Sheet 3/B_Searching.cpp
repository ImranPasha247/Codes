#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    long long x;
    bool ch =false;
    cin>>x;
    int j=0;
    for(;j<length;j++){
        if(x==arr[j]){
            ch = true;
            break;
        }
    }
    if(ch==true){
        cout<<j<<endl;
    }else{
        cout<<-1<<endl;
    }
 
 
}