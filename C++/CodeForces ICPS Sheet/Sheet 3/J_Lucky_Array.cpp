#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>v(arr,arr+n);
    sort(v.begin(),v.end());
    long long check=0;
    for(int i=0;i<n;i++){
        if(v[0]==v[i]){
            check+=1;
        }
    }
    if(check%2==0){
        cout<<"Unlucky"<<endl;
    }else{
        cout<<"Lucky"<<endl;
    }
}