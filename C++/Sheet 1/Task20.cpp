// Float or int
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin>>a;    
    if(a==(int)a){
        cout<<"int "<<a<<endl;
    }else{
        cout<<"float "<<a<<endl;
    }
}
// Q1. if(typeid(a).name()== "i"||"int"){ Const char, Comparison with string literal results in unspecified behavior[-Waddress]}
// Q2. if(cout<<typeid(a).name()==cout<<"i")
// Q3. if(a%1==0){boolean expression}