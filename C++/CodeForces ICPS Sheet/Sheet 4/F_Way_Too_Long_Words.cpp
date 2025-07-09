#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
void solve(){
    string s;
    cin>>s;
    if(s.size()>10){
        cout<<s[0]<<s.size()-2<<s.back()<<endl;
    }else{
        cout<<s<<endl;
    }
}