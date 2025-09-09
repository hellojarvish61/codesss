#include <iostream>
using namespace std;

void printRowWiseSum(int arr[3][3],int rows,int cols){
     // row wise traversal
     cout<<"printing row-wise sum"<<endl;
     for(int i = 0;i<rows;i++){
        int sum = 0;
        for(int j = 0;j<cols;j++){
            sum = sum + arr[j][i]; // col wise print hojayega
            sum = sum + arr[i][j]; // row wise print hojayega 
        }
        cout<<sum<<endl;
     }
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    // row wise input
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout <<"printing row wise"<<endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printRowWiseSum(arr,rows,cols);
    return 0;
}