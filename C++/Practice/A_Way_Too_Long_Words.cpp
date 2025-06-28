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
    string s;
    cin>>s;
    if(s.length()<=10){
        cout<<s;
    }else{
        cout<<s[0]<<s.length()-2<<s.back();

    }
    cout<<endl;
}