// Interval
#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;
    cin>>x;
    if(0<=x && x<=25){
        cout<<"Interval [0,25]";
    }else if(25<x && x<=50){
        cout<<"Interval (25,50]";       
    }else if(50<x && x<=75){
        cout<<"Interval (50,75]";     
    }else if(75<x && x<=100){
        cout<<"Interval (75,100]";   
    }else{
        cout<<"Out of Intervals";
    }
}
/*
Discussion:
    This one is easy... 
    But here One this to understand.. What symbol means what
    → ( <   great than
    → ) >   less than
    → [ <=  greater and equal 
    → ] >=  less and equal

*/