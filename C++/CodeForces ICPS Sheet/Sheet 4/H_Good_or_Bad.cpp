#include<bits/stdc++.h>
using namespace std;
int solve();
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
int solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')|| (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
            cout<<"Good"<<endl;
            return 0;
        }
    }
    cout<<"Bad"<<endl;
    return 0;
}