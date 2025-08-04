#include<bits/stdc++.h>
using namespace std; 
void solve(){
    string s;
    cin>>s;
    int num=0,upper_Case=0,lower_Case=0,sp_Case=0;
    if(s.length()<6){
        cout<<"Invalid"<<endl;
        return;
    }else{
        for(int i=0;i<s.length();i++){
            // if(islower(s[i])){lower_Case+=1;}
            if(s[i]>=97 && s[i]<=122){  lower_Case+=1;    }
            // else if(isupper(s[i])){lower_Case+=1;}
            else if(s[i]>=65 && s[i]<=90){ upper_Case+=1;  }
            // else if(isdigit(s[i])){lower_Case+=1;}
            else if(s[i]>=48 && s[i]<=57){ num+=1;}
            else{ sp_Case++;}
        }
    }
   
    if(num>=1 && sp_Case>=1 && upper_Case>=1 && lower_Case>=1){
        cout<<"Valid"<<endl;
        if(num>3 && sp_Case>2 && upper_Case>3 && lower_Case>3 && s.size()>=12){
            cout<<"Strong"<<endl;
        }else{
            cout<<"Weak"<<endl;
        }
    }else{
        cout<<"Invalid"<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}