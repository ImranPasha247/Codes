#include<bits/stdc++.h>
using namespace std;
int solve();
int main(){
    long long t,sum=0;
    cin>>t;
    while(t--){
        sum+=solve();
    }
    if(sum>=0){
    cout<<sum;
    }else{
        cout<<(-1)*sum;
    }
}
int solve(){
    long long a;
    cin>>a;
    return a;

}