// Sort Numbers
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
    if(a<=b && a<=c){
        return a;
    }else if(b<=c && b<=a){
        return b;
    }else{
        return c;
    }
}
int mid_value (long long a,long long b,long long c){
    return (a+b+c)- min_value(a,b,c)- max_value(a,b,c);
}

int max_value (long long a,long long b,long long c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=c && b>=a){
        return b;
    }else{
        return c;
    }
}
/*
Discussion:
    Here We can use library function instead of writing long code....
    Same concept...
    we use max and min function...
    and for mid value... 
    (a+b+c)-min({a,b,c})-max({a,b,c})

    long long a,b,c,mn,mx,md;
    cin>>a>>b>>c;
    mn=min({a,b,c});
    mx = max({a,b,c});
    md = (a+b+c)-mn-mx;
    cout << mn<<endl<<md<<endl<< mx<<endl<<endl;

*/