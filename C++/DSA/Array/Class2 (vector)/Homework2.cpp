// Single number
// Linear Search using vector;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int sum=0;
    for(int i:vec){
        sum^=i;
    }
    cout<<sum<<endl;
    return 0;
}