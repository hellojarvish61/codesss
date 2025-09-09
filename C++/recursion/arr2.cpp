// FIND maximum and maximim  number both
#include <iostream>
#include <limits.h>
using namespace std;
  void findMax(int arr[],int n , int i , int& maxi){
        // base case
        if(i>=n){
            // array agar khatam hogya, mtlab pura traverse hogya toh wapas aajao
            return ;
        }
        // 1 case solve krna hai h
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        // baaki ka recusion sambhal lega
        findMax(arr,n,i+1,maxi);
  }

  void findMini(int arr[],int n , int i , int& mini){
    // base case
    if(i>=n){
        return ;
    }
    if(arr[i]<mini){
        mini = arr[i];
    }
    findMini(arr,n,i+1,mini);
  }
int main(){
    // int arr[5]= {10,20,30,40,50};
    // int n = 5;
    // int i = 0;
    // int maxi = INT_MIN;
    // for(int i = 0;i<n;i++){
    //     if (arr[i]>maxi){
    //         maxi = arr[i];
    //     }
    // }
    // cout<<"maximum number is "<<maxi<<endl;

    int arr[]= {10,20,30,40,50,60,70,80};
    int n = 8;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    int i = 0; // index 
    findMax(arr,n,i,maxi);
    findMini(arr,n,i,mini);
    // array nikal rhe hai too arr pass kiya
    // array nikal rhe hai too uska size v pass karna prta hau
    // i v pass krna hoga kyuki hume index pr traversing krna hoga
    // maxi pass krna hoga kyuki hm maxi function pass kr rhe hai
    cout<< "maximum number is " << maxi << endl;
    cout<< "maximum number is " << mini << endl;

    return 0;
}