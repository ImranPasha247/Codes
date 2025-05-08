// Two numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    // Floor
    long long c = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<c<<endl;


    // Ceil
    if(a/b == c){
        cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    }else{
        cout<<"ceil "<<a<<" / "<<b<<" = "<<c+1<<endl;
    }


    // Round
    if((a/b)-c>=0.5){
        cout<<"round "<<a<<" / "<<b<<" = "<<c+1<<endl;
    }else{
        cout<<"round "<<a<<" / "<<b<<" = "<<c<<endl;
    }

}
/*
Discussion:
Here, Floor and Round same...
    If the value less than 0.5 then its floor &
    if the value is bigger and equal than 0.5 then its round...
But in case of Ceil....
if the value is little bit more like 0.1 or more than it is ceil
for example....
floor = 10/3 = 3.33 = 3
Round = 10/6 = 1.667 = 4
Ceil = 10/3 = 3.33 = 4
    = 10/6 = 1.66 = 4
*/