#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}
void solve (){
    long long a,b,sum=0;
    cin>>a>>b;
    long long mn=min(a,b)+1, mx=max(a,b)-1;
    for(int i =mn;i<=mx;i++){
        if((i%2)!=0){
        sum+=i;}
    }
    cout<<sum<<endl;
}
