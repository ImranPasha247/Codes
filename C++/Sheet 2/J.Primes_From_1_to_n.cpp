#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,n=0;
    int loop=1;
    cin>>a;

    for(;loop<=a;loop++){

        for(int ceck=1;ceck<=loop;ceck++){

            if(loop%ceck ==0){

                n++;
            }
        }
        if(n>2 || loop==1){

            if(loop==2){
                cout<<loop<<" ";
            }
            
        }else{
            cout<<loop<<" ";
        }
        n=0;
    }
}