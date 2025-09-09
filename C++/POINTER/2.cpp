#include<iostream>
using namespace std;

int main(){
    //int arr [4] = {12,14,16,18};

    // cout<< arr << endl;
    // cout<< arr[0] << endl;
    // cout<< &arr << endl;
    // cout<< &arr[0] << endl;

    // cout << *arr << endl;
    // cout << arr[0] << endl;
    // cout<< *arr+1 << endl;
    // cout<< *(arr) + 1 << endl;
    // cout<< *(arr+1)<< endl;
    // cout<< arr[1]<< endl;
    // cout<< *(arr+2)<<endl;
    // cout<< arr[2]<<endl;
    // cout<< *(arr + 3)<< endl;
    // cout<< arr[3]<< endl; 

    char name[9] = "SherBano";
    char*c = &name[0];

    cout<< name << endl;
    cout<< &name << endl;
    cout<< *(name + 3) << endl;
    cout<< c << endl;
    cout<< &c << endl;
    cout<< *(c+ 3) << endl;
    cout<< c+2 << endl;
    cout<< *c;
    cout<< c+8 << endl;

}