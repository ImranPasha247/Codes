#include<bits/stdc++.h>
using namespace std;
int main(){
    long long e,m,b,p,q,r,t=0;
    cin>>e>>m>>b;
    // 3rd condition
    if((e>=1) && (m >=1) &&(b>=1)){
        p=min({e,m,b});
        e -=p;
        m -=p;
        b-=p;
        t+=p;

    }
    // 2nd Condition
    if( m !=0){
        q=min({e/2,m,b});
        e = (e/2)-q;
        m -=q;
        b-=q;
        t+=q;
    }
// 1st condition
    if(e!=0 && b!=0){
        r=min({e/2,b});
        e = (e/2)-r;
        b-=r;
        t+=r;
    }
    cout<<t;
}