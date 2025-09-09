

// Find the Largest element in an array

#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int max = arr[0];
    for(int i = 0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main (){
    int arr[] = {2,5,4,8,1};
    int n = 5;
    int max = largestElement(arr,n);
    cout<<"the largest element in array :- " << max << endl;
}