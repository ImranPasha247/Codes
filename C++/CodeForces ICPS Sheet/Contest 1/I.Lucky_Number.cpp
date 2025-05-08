#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a;
    b=a/10;
    c=a%10;
    if(b==0 || c==0){
        cout<<"YES";
    }else if((b%c)==0 || (c%b)==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}