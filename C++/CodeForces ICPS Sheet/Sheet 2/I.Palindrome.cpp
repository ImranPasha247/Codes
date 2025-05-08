#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d=0;
    cin>>a;
    b = a;
    for(int i =0; i<1;i--){
        if(a!=0){
            c=a%10;
            d=d+c;
            if(d == b){
                cout<<d<<endl<<"YES";
                break;
            }
            a=a/10;
            if(a==0){
                cout<<d<<endl<<"NO";
                break;
            }
            d*=10; 
        }
    }

}