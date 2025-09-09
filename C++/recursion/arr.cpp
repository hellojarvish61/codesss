// print the array 
// traversing in array using recursion
#include <iostream>
using namespace std;

void print(int arr[5] , int n , int i){
    // base case
    if(i>=n){
        return;
    }
    // 1 case solve kr diya
    cout<< arr[i] << " ";
    // baaki ka recursion sambhal lega
    print(arr,n,i+1);
}

int main (){
    int arr[5]= {10,20,30,40,50};
    int n = 5;
    // i = index
    int i = 0;
    print(arr,n,i);

    return 0;
}