#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,n=0;
    cin>>a;
    for(int i = 1;i<=a;i++){
        if(a%i==0){
            n++;
        }
    }
    if(n>2 || a==1){
        if(a==2){
            cout<<"YES";
        }else{
        cout<<"NO";
        }
    }else{
        cout<<"YES";
    }
    
}