#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a;
    for(int i=0;i<a;i++ ){
        cin>>b;
        long long s=1;
        for(int j =1;j<=b;j++){
            s*=j;
        }
    cout<<s<<endl;
    }
}