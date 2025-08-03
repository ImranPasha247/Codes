#include<bits/stdc++.h>
using namespace std;
void solve(int t_num);
int main(){
    int t,t_num=1;
    cin>>t;
    while(t--){
        solve(t_num++);
    }
}
void solve(int t_num){
    int n;
    cin>>n;

    cout<<"Case "<<t_num<<":";

    int even[n/2],odd[n/2],evi=0,oddi=0;

    if(n%2!=0){

        cout<<" "<<"Impossible"<<endl;

    }else{
        for(int i=2;i<=n/2;i++){
   
            if(i%2==0 && n%i==0 ){
                even[evi++]=i;
            }else if(i%2!=0 && n%i==0){
  
                odd[oddi++]=i;
            }
        }
    }

    for(int i=0;i<n/2;i++){
        if(odd[0]*even[i]==n){
            cout<<" "<<odd[0]<<" "<<even[i]<<endl;
            break;
        }
    }
}
