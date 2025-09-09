#include<iostream>
using namespace std;

int main(){
    // int a = 5;

    // cout<< a << endl;

    // cout<<&a <<endl;

    // int a = 5;
    // // pointer create
    // int * ptr = &a;
    // // access the value ptr is pointing to 
    // cout<<"address of a is "<< &a <<endl;
    // cout<<"value stored at ptr is: "<<ptr<<endl;
    // cout<<"value ptr is pointing to is "<<*ptr<<endl;
    // cout<<&ptr<<endl; <

    // int a = 5 ; 
    // int * ptr = &a;
    // // copy pointer
    // int * dusraptr = ptr;
    // cout<< *ptr << endl;
    // cout<< *dusraptr << endl;

    int a = 10;
    int * p = &a;
    int * q = p;
    int * r = q;

    cout<< a << endl; // 10
    cout<< &a << endl; // address of a
    cout<< p << endl; // address of a
    cout<< &p << endl; // address of p
    cout<< *p << endl; // 10
    cout<< q << endl; // address of a
    cout<< &q << endl; // address of q
    cout<< *q << endl; // 10
    cout<< r << endl;  // address of a
    cout<< &r << endl; // address of r
    cout<< *r << endl; // 10
    cout<< (*p + *q + *r) << endl; // 30
    cout<< (*p)*2 + (*r)*3 << endl; // 50
    cout<< (*p/2) - (*q)/2<< endl; // 0
}