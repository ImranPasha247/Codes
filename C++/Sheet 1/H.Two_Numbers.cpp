// Two numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    // Floor
    long long c = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<c<<endl;


    // Ceil
    if(a/b == c){
        cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    }else{
        cout<<"ceil "<<a<<" / "<<b<<" = "<<c+1<<endl;
    }


    // Round
    if((a/b)-c>=0.5){
        cout<<"round "<<a<<" / "<<b<<" = "<<c+1<<endl;
    }else{
        cout<<"round "<<a<<" / "<<b<<" = "<<c<<endl;
    }

}