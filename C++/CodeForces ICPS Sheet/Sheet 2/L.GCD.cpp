// GCD
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,mn,mx,c;
    cin>>a>>b;
    mx = max(a,b);
    mn = min(a,b);
    for(;mn!=0;){
        c = mx%mn;
        mx=mn;
        mn=c;
    }
    cout<<mx;
}