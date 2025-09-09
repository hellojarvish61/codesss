#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    
    while(start <=end){
        int element = arr[mid];
        // element = index
        if(element == target){
            return mid;
        }
        else if (target <element){
            // left me search krna start kiya 
            end = mid - 1;
        }
        else{
            // right me search kro
            start = mid + 1;

        }
        mid = start + (end - start)/2;
    }
    // elment not found  
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,16};
    int size = 7;
    int target = 2;

    int indexOftarget = binarySearch(arr,size,target);

    if (indexOftarget == -1){
        cout<<"target not found" <<endl;
    }
    else{
        cout<<"target found at "<< indexOftarget <<" index";
    }
    return 0;
}