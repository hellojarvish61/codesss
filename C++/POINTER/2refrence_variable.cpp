#include<iostream>
using namespace std;

    // pass by value
    // void solve( int num){
    //     num ++;
    // }

    // int main(){

    //     int a = 5;
    // solve (a);

    // cout<< a << endl;

    // return 0;

    // pass by refrence
     void solve( int &num){
        num ++;
    }

    int main(){

        int a = 5;
    solve (a);

    cout<< a << endl;

    return 0;

};