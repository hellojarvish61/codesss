// 2 sum problem
 
// brute force aproach
// this give the output of yes and no

// #include <bits/stdc++.h>
// using namespace std;
// string twoSum(int n , vector<int>&arr,int target){
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]+arr[j]==target)
//             return "yes";
//         }
//     }
//     return "no";
// }
// int main (){
//     int n = 5;
//     vector<int>arr = {2,6,5,8,11};
//     int target = 14;
//     string ans = twoSum(n,arr,target);
//     cout<< "this is the answer for variant 1: "<< ans << endl;
// }

// this give the index of the array

// #include <bits/stdc++.h>
// using namespace std;

// vector<int>twoSum(int n, vector<int>&arr,int target){
//    vector<int> ans;
//      for(int i = 0;i< n ;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return {-1,-1};
// }
// int main (){
//     int n = 5;
//     vector<int>arr = {2,6,5,8,11};
//     int target = 14;
//     vector<int>ans = twoSum(n,arr,target);
//     cout<<"the index of the target is: " << ans[0] << "and" << ans[1];
// }



//  better approach

// #include<bits/stdc++.h>
// using namespace std;
// vector<int>twoSum(int n,vector<int>&arr,int target){
//     unordered_map<int,int>numIndexMap;

//     for(int i = 0;i<n;i++){
//         int complement = target - arr[i];

//         if(numIndexMap.find(complement)!=numIndexMap.end()){
//         return {numIndexMap[complement],i};
//     }
//     numIndexMap[arr[i]] = i;
//     }
//     return {-1,-1};
// }


// int main (){
//     vector<int>arr= {2,6,5,8,11};
//     int target = 14;

//     vector<int>ans = twoSum(arr.size(),arr,target);
//     if(ans[0]!=-1){
//         cout << "Indices: [" << ans[0] << ", " << ans[1] << "]" << endl;
//     }
//     else{
//         cout<<"no valod pair is found."<< endl;
//     }
// }



// optimal approach

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}
