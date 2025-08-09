#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2={1,2,3};

    // for each loop
    cout<<"Value of vector 2: ";
    for(int i:v2){
        cout<<i<<" ";    
    }
    cout<<endl;
    vector<int>v3(3,0); //size=3, every elements value is 0
    cout<<"Value of vector 3: ";
    for(int i:v3){
        cout<<i<<" ";    
    }
    cout<<endl;
    // STL = Std. Template Library
    // Vector Functions:
    cout<<"Initially, size of the v1: "<<v1.size()<<endl;
    v1.push_back(25);
    v1.push_back(35);
    v1.push_back(45);
    v1.push_back(55);
    cout<<"Value of vector 1 after Push At the back: ";
        for(int i:v1){
        cout<<i<<" ";    
    }
    cout<<endl;
    cout<<"After push, size of the v1: "<<v1.size()<<endl;
    v1.pop_back();
    v1.pop_back();
    cout<<"Value of vector 1 after Pop At the back: ";
        for(int i:v1){
        cout<<i<<" ";    
    }
    cout<<endl;
    cout<<"After pop, size of the v1: "<<v1.size()<<endl;
    cout<<"1st index value: "<<v1.front()<<endl;
    cout<<"Last index value: "<<v1.back()<<endl;
    // size & capacity
    cout<<"The size: "<<v1.size()<<endl;
    cout<<"The Capacity: "<<v1.capacity()<<endl;
/*
    Static vs Dynamic Allocation:
    static:
        1. compile time execution – memory size is fixed before the program runs
        2. Stored in stack (or sometimes in global/static memory section for global/static variables).
        3. Fast allocation/deallocation, simple to use.
        4. Size cannot change during program execution.
        5. example: int arr[5]
    Dynamic:
        1. Runtime Execution - memory size decided while the program is running.
        2. Stored in heap – managed manually or via data structures.
        3. Flexible size, memory allocated as needed.
        4. Slightly slower, requires manual deallocation (except with smart containers).
        5. Example: vector <int> vec;
*/


    
    
}