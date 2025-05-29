#include<bits/stdc++.h>
using namespace std;
long long solve();
int main(){
    long long n,t=0;
    cin>>n;
    while(n--){
        t+=solve();
    }
        cout<<t;

}
long long solve(){
    long long a,b,c,f=0;
    cin>>a>>b>>c;
    if(a==1){
        f++;
    }
    if(b==1){
        f++;
    }
    if(c==1){
        f++;
    }
    if(f>=2){
        return 1;
    }else{
        return 0;
    }

}