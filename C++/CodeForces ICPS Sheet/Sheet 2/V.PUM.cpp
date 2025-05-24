#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,j=1,k=4;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(;j<=k;j++){
            if(j==k){
                cout<<"PUM"<<endl;
            }else{
            cout<<j<<" ";
            }
        }
        k+=4;
    }
}