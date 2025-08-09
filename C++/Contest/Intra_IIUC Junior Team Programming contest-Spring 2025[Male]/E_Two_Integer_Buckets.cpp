#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    vector<int> bucket_A(a),bucket_B(b);
    for(int i=0;i<a;i++){
        cin>>bucket_A[i];
    }
    for(int i=0;i<b;i++){
        cin>>bucket_B[i];
    }
    int maxA=*max_element(bucket_A.begin(),bucket_A.end());
    int minB=*min_element(bucket_B.begin(),bucket_B.end());

    int bucket_A_to_B=0;
    for(int i=0;i<a;i++){
        if(minB<bucket_A[i]){
            bucket_A_to_B++;
        }
    }
    int bucket_B_to_A=0;
    for(int i=0;i<b;i++){
        if(maxA>bucket_B[i]){
            bucket_B_to_A++;
        }
    }

    if(bucket_A_to_B<bucket_B_to_A){
        cout<<bucket_A_to_B<<endl;
    }else{
        cout<<bucket_B_to_A<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
