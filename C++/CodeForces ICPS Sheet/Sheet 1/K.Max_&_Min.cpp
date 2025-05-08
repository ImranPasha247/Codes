// Max and Min
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    // cout<<"Max = "<<max({a,b,c})<<endl<<"Min = "<<min({a,b,c})<<endl;
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
/*
Discussion: 
    Here I just used the nested Condition... To find out which one is max
    and which one is min.....
    But this problem can be solve by using only library function
    max(a,b);
    min(a,b);
    But here is a thing.... 
    if I put more that 2 variable than the syntax will be different
    max({a,b,c,d,....});
    min({a,b,c,d,....});
 */