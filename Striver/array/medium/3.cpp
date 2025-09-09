// Find the Majority Element that occurs more than N/2 times
//brute force approach
// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {
//     int n = v.size();

//     for (int i = 0; i < n; i++) {
//         int cnt = 0;
//         for (int j = 0; j < n; j++) {
            
//             if (v[j] == v[i]) {
//                 cnt++;
//             }
//         }
//         if (cnt > (n / 2))
//             return v[i];
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }


// better approach

// # include<bits/stdc++.h>{
//     using namespace std;
//     int majorityElement(vector<int>v){
//         int n = v.size();

//         map<int,int>mpp;

//         for(int i = 0;i<n;i++){
//             mpp[v[i]]++;
//         }
//         for(auto it : mpp){
//             if(it.second > (n/2)){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
//     int main(){
//     vector<int>arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout<< "the majority element is: "<< ans <<endl;
// }



// optimal approach

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>arr){
    int n = arr.size();
    int cnt = 0;
    int el = 0;

    for(int i = 0;i<n;i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        }
        else if (el == arr[i])
        cnt ++;
        else cnt --;
    }

    int cnt1 = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==el)
        cnt1++;
    }
    if(cnt1 > (n/2))
    return el;

    return -1;
}
int main (){
    vector<int>arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout<< "the majority elements is:"<< ans << endl;
}