#include<bits/stdc++.h>
using namespace std;
int number(int b);
int main(){
    long long a,b;
    cin>>a;
    for(int i =1;i<=a;i++){
        cin>>b;
        int n=number(b);
        for(int j = 1;j<=n;j++){
            cout<<b%10<<" ";
            b=b/10;
        }
        cout<<endl;
    }
}
int number(int b){
    long long n=0;
    for(;;){
        if(b==0){
            break;
        }else{
            b/=10;
            n++;
        }
    }
    return n;
}
