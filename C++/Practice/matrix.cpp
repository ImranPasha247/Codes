#include<bits/stdc++.h>
using namespace std;
int main(){
    // First matrix
    long long row1,col1;
    cout<<"Enter the Rows and Columns of matrix A: ";
    cin>>row1>>col1;
    long long arr1[row1][col1];
    cout<<"Enter the elements of matrix A: "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    // 2nd Matrix
    long long row2,col2;
    cout<<"Enter the Rows and Columns of matrix B: ";
    cin>>row2>>col2;
    long long arr2[row2][col2];
    cout<<"Enter the elements of matrix B: "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }


    // result
    cout<<"Resultant Matrix: "<<endl;
    long long result[row1][col2],sum=0;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){ /* Here We can take row2.. because both value are same*/
                sum+= arr1[i][k] * arr2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }


}