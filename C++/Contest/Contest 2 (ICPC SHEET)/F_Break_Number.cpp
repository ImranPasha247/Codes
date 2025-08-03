#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,result=0,check=0,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        while(x%2==0){
            check+=1;
            x/=2;
        }
        if(result<check){
            result=check;
        }
        check=0;
    }
    cout<<result<<endl;
}