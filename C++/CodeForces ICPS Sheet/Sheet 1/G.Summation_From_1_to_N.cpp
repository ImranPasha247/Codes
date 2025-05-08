// Summation from 1 to N
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0;
    cin>>n;
    for(int i = 1; i <=n;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
    return 0;
}
/* Discussion:
Here this method is ok...
But it will takes lots of time....
As Because I used a loop thats mean the time complexity is O(n).... 
The time complecity can be O(1) by using the formula of...
summation of Nth series = (n×(n+1))÷2*/