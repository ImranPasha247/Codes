#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(n!=0){        
        // int temp=(n%2)*pow(10,i++);
        int temp=(n%2)*i;
        sum+=temp;
        n/=2;
        i*=10;
    }
    cout<<sum;
}