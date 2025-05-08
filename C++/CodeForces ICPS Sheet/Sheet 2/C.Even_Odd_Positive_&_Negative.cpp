#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,o=0,e=0,p=0,n=0;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if(b%2==0){
            e++;
        }else{
            o++;
        }
        if(b>0){
            p++;
        }else if(b<0){
            n++;
        }
    }
    cout<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Positive: "<<p<<endl<<"Negative: "<<n<<endl;
}