#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    // Minimum
    if(a<b&&a<c){
            cout<<a<<" ";
    }else if(b<c){
        cout<<b<<" ";
    }else{
        cout<<c<<" ";
    }
    // maximum
    if(a>b && a>c){
            cout<<a;
    }else if(b>c){
        cout<<b;
    }else{
        cout<<c;
    }
}