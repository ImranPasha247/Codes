#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b;
    cin>>n;
    a=n%10;
    b=n/10;
    if(min(a,b)==0){
        cout<<"YES";
    }else if(max(a,b)%min(a,b)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}