#include<bits/stdc++.h>
using namespace std;

void adjacent_XOR(){
    long long n;
    cin>>n;
    long long arr1[n],arr2[n];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    for(int i=0;i<n-1;i++){
        if(arr1[i]!=arr2[i]){
            arr1[i]=arr1[i]^arr1[i+1];
        }
    }
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        adjacent_XOR();
    }
}


/*
#include<bits/stdc++.h>
using namespace std;
void adjacent_XOR(){
    long long n;
    cin>>n;
    long long arr1[n],arr2[n];
    for(int i=0;i<n;i++){
    cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            continue;
        }else{
            arr1[i]=(arr1[i]^arr1[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            cout<<"NO"<<endl;;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        adjacent_XOR();
    }
 
 
}
*/