#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n){
                v.push_back( i*j);
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.back()<<endl;
}
/*
int main() {
    int n;
    cin>>n;
    int a=n/2;
    int b=n-a;
    cout<<a*b<<endl;
}
*/