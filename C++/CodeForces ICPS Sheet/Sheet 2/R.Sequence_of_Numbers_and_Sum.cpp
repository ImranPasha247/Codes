#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    while(cin>>a>>b){
        long long sum =0;
        if(a<=0 || b<=0){
            break;
        }
            for(int i =min(a,b);i<=max(a,b);i++){
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        
    }
}