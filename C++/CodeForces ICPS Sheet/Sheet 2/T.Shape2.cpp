#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(int row =1;row<=n;row++){
        for( int space =1; space<=(n-row); space++){
        cout<<" ";
    }
        for( int star=1; star<=(row*2)-1;star++){
            cout<<"*";
        }
        cout<<endl;
}
 
}