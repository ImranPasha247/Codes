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
void solve(){
    long long a,b,sum=0;
    cin>>a>>b;
    long long mx=max(a,b),mn=min(a,b);
    sum = (mx-mn+1)*(mx+mn);
    cout<<sum/2<<endl;
}