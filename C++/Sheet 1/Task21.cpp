#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    char c;
    cin>>a>>c>>b;
    switch(c){
        case '>':
            if(a>b){ 
                    cout<<"Right";
                    }
            else{
                    cout<<"Wrong";
            }
            break;

        case '<':
            if(a<b){ 
                cout<<"Right";
                    }
            else{
                cout<<"Wrong";
                }
                break;
        case '=': 
            if(a==b){ 
                cout<<"Right";
                    }
            else{
                cout<<"Wrong";
                }
            break;
    }
     
}