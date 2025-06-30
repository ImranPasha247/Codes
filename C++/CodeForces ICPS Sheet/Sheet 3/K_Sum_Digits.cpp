#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0;
    cin>>n;
    string x;
    cin>>x;
    for(int i=0;i<n;i++){
        sum+=x[i]-'0';
        
    }
    cout<<sum<<endl;
}