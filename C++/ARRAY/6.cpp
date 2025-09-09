// max number in an array 
#include <iostream>
#include <limits.h>

using namespace std;
int main(){
    int arr[]={2,6,1,5,9,7,55,6,99,4,2,6}; 
    int size = 12;
    // initailase the max variable with the minimum
    // possible integer value
    int maxi = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            // found a number greater than maxi,update maxi
            maxi=arr[i] ;
        }
    }
    cout<<"maximum number is "<<maxi<<endl;
}