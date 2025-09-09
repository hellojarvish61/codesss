// First and Last Occurrences



// this is also a optimal approach but this approach use upper and lower bound concept
// #include<bits/stdc++.h>
// using namespace std;

// void findFirstAndLast(const std::vector<int>& arr, int target) {
    
//     int first = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    
//     int last = upper_bound(arr.begin(), arr.end(), target) - arr.begin() - 1;

//     // Check if the target exists in the array
//     if (first >= arr.size() || arr[first] != target) {
//         cout << "Target " << target << " not found.\n";
//     } else {
//         cout << "First occurrence: " << first << "\n";
//         cout << "Last occurrence: " << last << "\n";
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
//     int target = 2;

//     findFirstAndLast(arr, target);

//     return 0;
// }



// this code using binary search

#include <iostream>
#include <vector>
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

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    int first = findFirstOccurrence(arr, target);
    int last = findLastOccurrence(arr, target);

    if (first == -1) {
        cout << "Target " << target << " not found in the array.\n";
    } else {
        cout << "First occurrence: " << first << "\n";
        cout << "Last occurrence: " << last << "\n";
    }

    return 0;
}




