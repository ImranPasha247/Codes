#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,o=0,e=0,d;
    cin>>a>>b;
    c=a+b;
    d= max({a,b})-min({a,b});
    for(int i=0;i>-1;i++){
        if(d>=2||a==0 || b==0){
            cout<<"NO";
            break;
        }
        for(int j=i;j<c+i;j++){
            if(j%2==0 && j>0){
                e++;
            }else if(j%2!=0 && j>0){
                o++;
            }
        }
        if(e==b && o==a){
            cout<<"YES";
            break;
        }else{
        e=0;
        o=0;
        }    
    }
}