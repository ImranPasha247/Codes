#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int right=n,i=1,left=i;
    for(;i<=(n/2)+1;i++){
        for(int j =1;j<=n;j++){
            if(i==(n/2)+1 && j==(n/2)+1){
                cout<<"X";
            }
           else if(j==left || j==right){
                if(j==left){cout<<"\\";}
                else{cout<<"/";}
            }else{
                cout<<"*";
            }
        }
        left++;right--;
         cout<<endl;       
    }

    i-=2;
    for(;i>=1;i--){
        for(int j =1;j<=n;j++){
           if(j==left || j==right){
                if(j==left){cout<<"\\";}
                else{cout<<"/";}
            }else{
                cout<<"*";
            }
        }
        left++;right--;
         cout<<endl;       
    }
    

}