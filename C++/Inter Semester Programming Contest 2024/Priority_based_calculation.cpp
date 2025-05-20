#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,cas=1;
    cin>>t;
    // int first,second,third,fourth;
    // first
    while(t--!=0){
        cin>>a>>b;
        cout<<"Case "<<cas++<<":";
        if(a==b){
            cout<<a*log(b);
        }
        //For a base
        //  1st Priority
        else if(-7<=a<=-6 || 6<=a<=7){
            
            if(-7<=b<=-6 || 6<=b<=7){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(a,b);
            }
        }
        // 2nd Priority
        else if(-5<=a<=-4 || 4<=a<=5){
            
            if(-5<=b<=-4 || 4<=b<=5){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(a,b);
            }
        }
        // 3rd Priority
        else if(-3<=a<=0 || 0<=a<=3){
            if(-3<=b<=0 || 0<=b<=3){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(a,b);
            }
        }
        // 4th Priotity
        else if(-9<=a<=-8 || 8<=a<=9){
            
            if(-9<=b<=-8 || 8<=b<=9){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(a,b);
            }
        }
        // For b base
        // 1st Priority
        else if(-7<=b<=-6 || 6<=b<=7){
            
            if(-7<=a<=-6 || 6<=a<=7){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(b,a);
            }
        }
        // 2nd Priority
        else if(-5<=b<=-4 || 4<=b<=5){
            
            if(-5<=a<=-4 || 4<=a<=5){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(b,a);
            }
        }
        // 3rd Priority
        else if(-3<=b<=0 || 0<=b<=3){
            if(-3<=a<=0 || 0<=a<=3){
            cout<<pow(max(a,b),min(a,b));

            }else{
                cout<<pow(b,a);
            }
        }
        // 4th Priotity
        else if(-9<=b<=-8 || 8<=b<=9){
            
            if(-9<=a<=-8 || 8<=a<=9){
                cout<<pow(max(a,b),min(a,b));
            }else{
                cout<<pow(b,a);
            }
        }
    }
}