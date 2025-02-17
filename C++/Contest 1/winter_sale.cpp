// Winter sale
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long b;
    double a, c;
    cin>>a>>b;
    a = a/100;
    c= b/(1-a);
    cout<<fixed<<setprecision(2)<<c<<endl;
}