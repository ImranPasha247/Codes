#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;
    int b = a;
    if(b>=97 && b<122){
        a++;
        cout<<a;
    }else if(b==122){
        cout<<'a';
    }
}