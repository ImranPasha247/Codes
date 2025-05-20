// Hard Compare
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*log(a)>d*log(c)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
/*
Discussion:
    In this problem, we used the mathamatical term....
    But this one also can Done by pow(a,b) > pow(c,d)
    But there will be a problem..Cuz in the condition the value will be to big it wont give a big number
*/