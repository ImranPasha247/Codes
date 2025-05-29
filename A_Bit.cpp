#include<bits/stdc++.h>
using namespace std;
int solve();
int main(){
    long long t;
    cin>>t;
    int x=0;
    while(t--){
        x+=solve();
    }
    cout<<x;
}
int solve(){
    char a,b,c;
    cin>>a>>b>>c;
    if(a=='X'){
        if(b=='+'&& c=='+'){
            return 1;
        }else{
            return -1;
        }
    }else{
        if(a=='+' && b=='+'){
            return 1;
        }else{
            return -1;
        }
    }
}