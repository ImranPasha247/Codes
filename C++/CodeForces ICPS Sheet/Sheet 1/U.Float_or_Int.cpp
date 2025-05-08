// Float or int
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin>>a;    
    if(a==(int)a){
        cout<<"int "<<(int)a<<endl;
    }else{
        cout<<"float "<<(int)a<<" "<<a-(int)a<<endl;
    }
}
