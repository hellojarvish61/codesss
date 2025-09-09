// binary search using recursion
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int& e, int &key)
{
    // base case
    // case 1 -. key not found
    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    // case 2 -> key found
    if (arr[mid] == key)
        return mid;

    // arr[mid]< key -> right me search
    if (arr[mid] < key)
    {
        int ans = binarySearch(arr, mid + 1, e, key);
        return ans;
    }
    // arr[mid] > key -> left me search
    else
        //(arr[mid] > key)
        {
            int ans = binarySearch(arr, s, mid - 1, key);
            return ans;
        }
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};
    int key = 90;

    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans = binarySearch(arr, s, e, key);

    cout << "answer is " << ans << endl;

    return 0;
}
