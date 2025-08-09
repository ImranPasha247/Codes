#include<bits/stdc++.h>
using namespace std;
void int_long_check(long long ans){
    if(ans>=-pow(2,31) && ans<=pow(2,31)-1){
        cout<<"int"<<endl;
    }else{
        cout<<"long long"<<endl;
    }
}
int main(){
    long long  n,k,a;
    cin>>n>>k>>a;
    long long ans= (n*k);
    if( ans%a !=0){
        cout<<"double"<<endl;
    }else{
        ans/=a;
        int_long_check(ans);
    }
    return 0;
}