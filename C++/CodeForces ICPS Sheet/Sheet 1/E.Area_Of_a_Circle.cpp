// Area of a Circle
#include<bits/stdc++.h>
using namespace std;
int main (){
    double r;
    cin>>r;
    cout<<fixed<<setprecision(9)<<pow(r,2)* M_PI<<endl;

}
/*
Discussion:
    Here setprecision(9) is used to get the output only 9 digits.. 
    after that it will not show the other value if there is any.....
    pow(r,2) is for the power...
    as the formula is pai*r*r..
     */