#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,reverse=0;
    cin>>n;
    int i=-1,count=n;
    
    for(;count>0;i++){
        count/=10;
    }
    while(n!=0){
        int temp= (n%10)*pow(10,i);
        reverse+=temp;
        n/=10;
        i--;
    }
    cout<<reverse;
}