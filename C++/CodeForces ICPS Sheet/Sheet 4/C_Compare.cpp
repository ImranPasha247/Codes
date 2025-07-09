#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    long long mn=min(s1.size(),s2.size());
    for(int i=0;i<mn;i++){
        if(s1[i]!=s2[i]){
            if(s1[i]<s2[i]){
                cout<<s1<<endl;
                return 0;
            }else{
                cout<<s2<<endl;
                return 0;
            }
        }
    }
    if(s1.size()==mn){
        cout<<s1<<endl;
    }else{
        cout<<s2<<endl;
    }
    return 0;
}