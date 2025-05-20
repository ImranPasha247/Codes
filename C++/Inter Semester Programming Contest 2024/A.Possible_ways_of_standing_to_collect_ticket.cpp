#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,test_case=1;
    while(cin>>n){
    cout<<"Test Case "<<test_case++<<":\n";
    for(int i =1;i<=n;i++){
        printf("Line %d:\n",i);
            for(int j=1;j<=i;j++){
                // For Even(Horizontal Line)
                if(i%2==0){
                    cout<<j<<" ";
                }else{
                    cout<<j<<endl;
                }
            }  
        if(i%2==0){
        cout<<endl;
                }
    }
    }
    return 0;
}