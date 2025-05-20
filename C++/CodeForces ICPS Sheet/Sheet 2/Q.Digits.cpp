#include<bits/stdc++.h>
using namespace std;
void test_case();
int main(){
    long long t;
    cin>>t;
    while(t--){
    test_case();
    }
}
void test_case(){
    long long a;
    cin>>a;
    if(a==0){
        cout<<"0 ";
    }
    while(a!=0){
        cout<<a%10<<" ";
        a/=10;
    }
    cout<<endl;
}