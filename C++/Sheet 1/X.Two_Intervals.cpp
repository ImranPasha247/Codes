// Two Intervals
#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,c,d,start,end;
cin>>a>>b>>c>>d; 
    if(a>=c){
        start = a;
    }else{
        start = c;
    }
        
    if(b>=d){
        end = d;
    }else {
        end = b;
    }
    if(start<=end){
        cout<<start<<" "<<end<<endl;
    }else{
        cout<<-1;
    }
}