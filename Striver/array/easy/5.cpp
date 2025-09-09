// left rotate  the array by one place

#include<bits/stdc++.h>
void solve(int arr[],int n){
    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
using namespace std;
int main (){
    int n = 5;
    int arr[]={1,2,3,4,5};
    solve(arr,n);

    cout<<"array after left rotate by one place: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}