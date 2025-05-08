#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    for(int i =a;i>=1;i--){
        for(int j =1;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
}