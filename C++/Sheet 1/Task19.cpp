#include<bits/stdc++.h>
using namespace std;
int min_value (long long a,long long b,long long c);
int max_value (long long a,long long b,long long c);
int mid_value (long long a,long long b,long long c);
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    cout << min_value(a, b, c) <<endl<<mid_value(a,b,c)<<endl<< max_value(a, b, c)<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
int min_value (long long a,long long b,long long c){
    if(a<b && a<c){
        return a;
    }else if(b<c && b<a){
        return b;
    }else{
        return c;
    }
}
int mid_value (long long a,long long b,long long c){
    return (a+b+c)- min_value(a,b,c)- max_value(a,b,c);
}

int max_value (long long a,long long b,long long c){
    if(a>b && a>c){
        return a;
    }else if(b>c && b>a){
        return b;
    }else{
        return c;
    }
}