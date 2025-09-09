#include<iostream>
#include<vector>
using namespace std;
int main(){
    // declare 2D array
    //int arr[3][3];
    // initalisation
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // row wise printing

    // outer loop
    for(int i=0;i<3;i++){
        // for every row,we need to print value in each 
        //column
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}