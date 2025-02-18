// Char
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;
    int b = int(a);
        if(b>=65 && b<97){
           char c = a+32;
            cout<<c;
        }else{    
        char c = a-32;
            cout<<c;
        }
   
}