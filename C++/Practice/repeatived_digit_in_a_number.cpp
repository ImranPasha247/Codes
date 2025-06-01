#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s=to_string(n);
    long long x=s.length(),arr[x];
    for(int i=0;i<x;i++){
        arr[i]=n%10;
        n/=10;
    }
    long long c,k=0;
    cin>>c;
    for(int i=0;i<5;i++){
        if(c==arr[i]){
            k++;
        }
    }
    if(k>=2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}