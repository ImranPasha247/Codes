#include<bits/stdc++.h>
using namespace std;
void bitwise_and_operator(int a,int b){cout<<"Bitwise And(&) Operator = "<<a<<" & "<<b<<" = "<<(a&b)<<endl;}

void bitwise_or_operator(int a,int b){cout<<"Bitwise Or(|) Operator = "<<a<<" | "<<b<<" = "<<(a|b)<<endl;}

void bitwise_Xor_operator(int a,int b){cout<<"Bitwise XOR(^) Operator = "<<a<<" ^ "<<b<<" = "<<(a^b)<<endl;}


void bitwise_LeftShift_operator(int a,int b){
    cout<<"Bitwise Left Shift(<<) Operator = "<<a<<" << "<<"1 = "<<(a<<1)<<endl;
    cout<<"Bitwise Left Shift(<<) Operator = "<<b<<" << "<<"1 = "<<(b<<1)<<endl;
}

void bitwise_Right_Shift_operator(int a,int b){
    cout<<"Bitwise Right Shift(<<) Operator = "<<a<<" >> "<<"1 = "<<(a>>1)<<endl;
    cout<<"Bitwise Right Shift(<<) Operator = "<<b<<" >> "<<"1 = "<<(b>>1)<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    bitwise_and_operator(a,b);
    bitwise_or_operator(a,b);
    bitwise_Xor_operator(a,b);
    bitwise_LeftShift_operator(a,b);
    bitwise_Right_Shift_operator(a,b);
    return 0;
}



/*
   Xor Operator:
    here logic is little bit diffent in case of XOR
        0^0=0
        1^1=0
        0^1=1
        tricks: same → 0
                diff → 1
   Bitwise Right(>>) and Left(<<) shift operator:
    This operator shift the value one step right or left..
    for Example:
     if we left shift 100 for 1 step = 100<<1 = 1000 
     if we right shift 100 to 1 step = 100>>1=010 
     (a<<b it means that answer = a * 2^b
        for Example 8<<1 , the answer = 8 * 2^1 = 16
     )
    (In case of right shift it won't create another space, it will just remove that bit
        a>>b it means that answer = a / 2^b
        for Example 8>>1 , the answer = 8 / 2^1 = 4
    )

*/ 