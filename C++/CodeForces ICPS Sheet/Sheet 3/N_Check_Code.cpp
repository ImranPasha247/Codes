#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    string s;
    cin>>a>>b>>s;
        if(s[a]=='-' && (a+b+1)==s.length()){
            for(int i=0;i<s.length();i++){
                if(i==a){continue;}
                if(!isdigit(s[i])){
                    cout<<"No";
                    return 0;
                }
            }
            cout<<"Yes";
        }else{
            cout<<"No";
        }
        return 0;

}