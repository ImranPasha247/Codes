#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    cout<<"Input: "<<n<<endl<<endl;
    cout<<"Output:"<<endl<<n<<"!"<<" "<<"--"<<endl;
    // n!
    long long f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<f<<endl;
    string s=to_string(f);
    
    for(int i=0;i<=9;i++){
        int check=0;
        for(int j=0;j<s.length();j++){
            if(i==s[j]-'0'){
                check++;
            }
        }
        printf("(%d) %d ",i,check);
        if(i==4){
            cout<<endl;
        }
    }

}