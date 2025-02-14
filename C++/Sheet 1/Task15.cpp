#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    x = x/1000;
    if(x%2 == 0){
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
}