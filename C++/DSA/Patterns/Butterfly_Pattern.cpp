#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int star=1;star<=i;star++){
                cout<<"*";
        }
        for(int space=1;space<=(n-i)*2;space++){
            cout<<" ";
        }
        for(int star=1;star<=i;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int star=1;star<=i;star++){
            cout<<"*";
        }
        for(int space=1;space<=(n-i)*2;space++){
            cout<<" ";
        }
        for(int star=1;star<=i;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}