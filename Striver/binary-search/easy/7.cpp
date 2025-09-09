// Count Occurrences in Sorted Array


// brute force approach


// #include<bits/stdc++.h>
// using namespace std;
// int count(vector<int>& arr, int n, int x) {
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) cnt++;
//     }
//     return cnt;
// }

// int main()
// {
//     vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
//     int n = 8, x = 8;
//     int ans = count(arr, n, x);
//     cout << "The number of occurrences is: "
//          << ans << "\n";
//     return 0;
// }



// optimal approach


#include<bits/stdc++.h>
using namespace std;

int findFirstOccurrence(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int countOccurrences(const vector<int>& arr, int target){
    int first = findFirstOccurrence(arr,target);
    if (first == -1) return 0; // Target not found
    int last = findLastOccurrence(arr, target);
    return last - first + 1;
}

int main(){
    vector<int> arr = {1,2,2,2,3,4,5};
    int target = 2;

    int count = countOccurrences(arr,target);

    if(count == 0){
        cout<< "target"<< target <<" not found in the array";
    }else{
        cout<<"target"<<target << "occurs "<< count << " times ";
    }
}