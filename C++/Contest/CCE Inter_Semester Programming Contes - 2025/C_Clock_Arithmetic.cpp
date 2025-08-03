#include<bits/stdc++.h>
using namespace std;
int main(){
    double h,m,result;
    cin>>h>>m;
    h*=30;
    m*=11.0/2;
    result = h-m;
    if(result <=0 ){
        cout<<fixed<<setprecision(7)<<-result;
    }else if(result>180){
        cout<<fixed<<setprecision(7)<<360-result;
    }else{
        cout<<fixed<<setprecision(7)<<result;
    }
}



