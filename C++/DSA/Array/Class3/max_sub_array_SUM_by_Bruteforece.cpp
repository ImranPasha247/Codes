// Maximum Subarray Sum By Bruteforce
#include<bits/stdc++.h>>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> vec;

    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
                sum+=arr[end];
            
        }
        vec.push_back(sum);
    }
    sort(vec.begin(),vec.end());
    cout<<vec.back();

    return 0;
}
