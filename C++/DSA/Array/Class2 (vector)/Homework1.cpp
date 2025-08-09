// Linear Search using vector;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        if(target==vec[i]){
            cout<<vec[i];
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}