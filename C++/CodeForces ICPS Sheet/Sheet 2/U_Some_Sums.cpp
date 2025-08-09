#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,answer=0;
    cin>>a>>b>>c;
    for(long long i=1;i<=a;i++){
        long long val_check=i;
        long long sum=0;
        while(val_check!=0){
            sum+=(val_check%10);
            val_check/=10;
        }
        if(sum>=b && sum<=c){
            answer+=i;
        }
    }
    cout<<answer<<endl;
    return 0;
}