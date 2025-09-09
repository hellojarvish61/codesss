// remove duplicate inplace from sorted array
// brute force approach

// #include <bits/stdc++.h>
// using namespace std;
// int removeDuplicate(int arr[],int n){
//     set<int>set;
//     for(int i = 0;i<n;i++){
//         set.insert(arr[i]);
//     }
//     int k = set.size();
//     int index = 0;
//     for(auto it : set){
//         arr[index] = it;
//         index ++;
//     }
//     return k;
// }
// int main(){
//     int arr[]={1,1,2,2,2,3,3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = removeDuplicate(arr,n);
//     cout<< "the array after removing duplicate elements is:- ";
//     for(int i = 0;i<k;i++){
//         cout<<arr[i]<<"";
//     }
// }


// optimal approach

#include <bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n){
    int i = 0;
    for(int j = 1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr,n);
    cout<<"the array after removing duplicate elements is "<< endl;
    for(int i = 0;i<k;i++){
        cout << arr[i] << " ";
    }
}