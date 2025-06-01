#include<bits/stdc++.h>
using namespace std;
int main(){
    long long row1,col1;
    cout<<"Enter the rows and columns of matrix A: ";
    cin>>row1>>col1;
    cout<<"Enter the elements of matrix A:"<<endl;
    long long arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the rows and columns of matrix B: ";
    long long row2,col2;
    cin>>row2>>col2;
    long long arr2[row2][col2];
    cout<<"Enter the elements of matrix B:"<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }

    long long result[row1][col2],sum=0;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                sum+= arr1[i][k] * arr2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    cout<<"Resultant matrix:"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
   
}