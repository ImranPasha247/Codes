#include<bits/stdc++.h>
using namespace std;
int Bin_To_Dec(int num){
    int n=0,sum=0;
    while(num!=0){
        int temp=(num%10)*pow(2,n++);
        // int temp =(num%10)*n; For this one, n start from n=1
        // n*=2;
        sum+=temp;
        num/=10;       
    }
     return sum;
}
int main(){
    int val;
    cin>>val;
    int result = Bin_To_Dec(val);
    cout<<result;
    return 0;
}