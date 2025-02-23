#include<bits/stdc++.h>
using namespace std;
int main(){
    char s;
    long long a,b;
    cin>>s>>a;
    if(s =='+' || s =='-' || s =='*' || s =='/'){
    for(int i=0;i<a;i++){
        cin>>b;
        for (int j=1;j<=b;j++){
            cout<<s;
        }
        cout<<endl;
    }
}
}
