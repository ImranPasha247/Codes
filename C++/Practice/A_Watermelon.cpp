#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    if(t==2){
        cout<<"NO";
    }
    else if(t%2==0){
        cout<<"YES";
    }else{
    long long a,b;
    a=t%2;
    b=(t/2);
    if(a==0 && b%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
}