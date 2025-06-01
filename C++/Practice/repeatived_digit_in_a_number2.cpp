#include<bits/stdc++.h>
using namespace std;
int main(){
    long long seen[10]={0},n;
    cin>>n;
    while(n>0){
        if(seen[n%10]==1){
            break;
        }
        seen[n%10]=1;
        n=n/10;
    }
    if(n>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}