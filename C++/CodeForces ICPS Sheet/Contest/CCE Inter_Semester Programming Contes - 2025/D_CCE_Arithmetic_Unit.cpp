#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,sum=0;
    cin>>t;
    string s;
    cin>>s;
    
    for(int i=0;i<t;i++){
        sum+=s[i] - '0';
    }
    cout<<sum<<endl;
    return 0;
}