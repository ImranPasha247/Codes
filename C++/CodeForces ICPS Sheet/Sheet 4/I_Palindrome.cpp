#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long sIze=s.size(),bacK=1;   
    for(int i=0;i<sIze;i++){
        if(s[i]!=s[sIze-bacK++]){
           cout<<"NO";
           return 0;
        }
    }
    cout<<"YES";
    return 0;
}