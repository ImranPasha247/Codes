#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,years,months,days;
    cin>>a;
    years = a/365;
    months = (a%365)/30;
    days = (a%365)%30;
    cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days"<<endl;
}