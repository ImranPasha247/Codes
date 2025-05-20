#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x=6;
    cin>>n;
    for(int i=1;i<=21;i+=2){
        if(i==n){
            break;
        }else{
            x++;
        }
    }

    for(int row =1;row<=x;row++){
        for(int space=1;space<=(x-row);space++){
            cout<<" ";
        }

        for(int star = 1;star<=(row*2)-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int tree =1;tree<=5;tree++){
        for(int space=1;space<=5;space++){
            cout<<" ";
        }
        for(int star=1; star<=n;star++){
            cout<<"*";
        }
        cout<<endl;
    }

}