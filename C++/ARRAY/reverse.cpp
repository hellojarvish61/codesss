#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={2,6,1,5,9,7,55,6,99,4,2,6}; 
    int size = 12;

    int start = 0;
    int end = start -1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }