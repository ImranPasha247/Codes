#include<bits/stdc++.h>
using namespace std;

void lever(){
    int n;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n; i++){
        cin>>arr2[i];
    }

    int total_iteration = 0;

    while(true){
        bool decreased=false; 
        bool increased=false;

        for(int j=0;j<n;j++){
            if(arr1[j]>arr2[j]){
                arr1[j]--;
                decreased=true;
                break; 
            }
        }
        for(int j=0;j<n;j++){
            if(arr1[j]<arr2[j]){
                arr1[j]++;
                increased=true;
                break;
            }
        }

        total_iteration++;

        if(!decreased) break;
    }

    cout<<total_iteration<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lever();
    }
}
