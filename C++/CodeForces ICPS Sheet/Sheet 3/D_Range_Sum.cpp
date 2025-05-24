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
    for(;a<=b;a++){
        sum+=a;
    }
    cout<<sum<<endl;

}