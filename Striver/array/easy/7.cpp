// move all zeros to the end of the array

// brute force approach

// #include <bits/stdc++.h>
// using namespace std;
// vector<int>moveZeros(int n,vector<int>a){
//     vector<int> temp;
//     for(int i = 0;i<n;i++){
//         if(a[i]!=0)
//         temp.push_back(a[i]);
//     }
//     int nz = temp.size();
//     for(int i = 0;i<nz;i++){
//         a[i] = temp[i];
//     }
//     for(int i = nz;i<n;i++){
//         a[i] = 0;
//     }
//     return a;
// }
// int main(){
// vector<int>arr = {1,0,2,3,0,5,6,8,0,4};
// int n = 10;
// vector<int>ans= moveZeros(n,arr);
// for (auto &it : ans){
//     cout<< it <<" ";
// }
// }




// optimal approach

#include<bits/stdc++.h>
using namespace std;
vector<int>movesZeros(int n,vector<int>arr){
    int j = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    if(j==-1)
    return arr;

    for(int i = j + 1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main(){
    vector<int>arr = {1,0,2,3,0,5,6,8,0,4};
    int n = 10;
    vector <int> ans = movesZeros(n,arr);
    for(auto & it: ans){
        cout<<it<<" ";
    }
}


