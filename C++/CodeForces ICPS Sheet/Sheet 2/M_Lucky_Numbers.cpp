#include<bits/stdc++.h>
using namespace std;
bool lucky_check(int i){
    while(i!=0){
        if((i%10)!=4 && (i%10)!=7){
            return false;
        }
        i/=10;
    }
    return true;
}
int main(){
    long long a,b;
    cin>>a>>b;
    bool flag=false;
    for(int i=a;i<=b;i++){
    if(lucky_check(i)==true){
        cout<<i<<" ";
        flag=true;
    }
    }
    if(flag==false){
        cout<<-1<<endl;
    }
    return 0;
}