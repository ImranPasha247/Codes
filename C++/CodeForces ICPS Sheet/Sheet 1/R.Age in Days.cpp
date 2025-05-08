// Age in Days
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,years,months,days;
    cin>>a;
    years = a/365;
    a%=365;
    months = a/30;
    days = a%30;
    cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days"<<endl;
}