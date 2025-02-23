#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,mx,mn,c;
    cin>>a>>b;
    mx=max({a,b});
    mn=min({a,b});
    c= mx%mn;

    if(c==0){
        cout<<mn;
    }else{
        mn=mn/c;


    }
}