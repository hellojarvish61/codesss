#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}












// using vector
#include <iostream>
#include <vector>
using namespace std;

// Function to perform Linear Search (without n)
int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) { // Use .size() to get the size
        if (arr[i] == key) {
            return i; // Return index if key is found
        }
    }
    return -1; // Return -1 if key not found
}

int main() {
    int n, key;

    // Input vector size
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> arr(n); // Create vector with 'n' elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the key to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform Linear Search
    int result = linearSearch(arr, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the vector." << endl;
    }

    return 0;
}

