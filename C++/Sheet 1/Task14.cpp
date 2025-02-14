#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    char c;
    cin>>a>>c>>b;
    switch (c)
    {
    case '+':cout<< a+b; 
        break;
    case '-': cout<<a-b;
    break;
    case '*':cout<<a*b;
    break;
    case '/':cout<<(int)a/b;
    break;
    default: cout<<"You did not select any Calculating symbol";
        break;
    }
}