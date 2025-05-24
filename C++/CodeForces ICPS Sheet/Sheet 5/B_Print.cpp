#include<bits/stdc++.h>
using namespace std;
void solve(long long t);
int main(){
    long long t;
    cin>>t;
    solve(t);
}
void solve(long long t){
    for(int i=1;i<=t;i++){
        if(i==t){
            cout<<i;
        }else{
        cout<<i<<" ";
        }
    }
}