#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;
    switch(d){
        case '+':    if(c==(a+b)){cout<<"Yes";} 
            else{ cout<<a+b;}
        break;

        case '-':    if(c==(a-b)){cout<<"Yes"; }
            else{ cout<<a-b;}
        break;

        case '*':    if(c==(a*b)){cout<<"Yes";}
            else{ cout<<a*b;}
        break;
    }


}