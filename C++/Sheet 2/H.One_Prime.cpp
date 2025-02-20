#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    for(int i = 1;i<10;i++){
        if(a==1){
            cout<<"NO";
        }else if(a%i == 0 && i!=1 && i!=a){
            cout<<"NO";
            break;
        }else if(i==9){
            cout<<"YES";
            break;
        }
    }
    
}