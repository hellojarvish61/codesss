//  Find the Nth root of an Integer


// brute force 

// #include<bits/stdc++.h>
// using namespace std;

// int pow(int base,int exp){
//     int result = 1;
//     for(int i = 0;i<exp;i++){
//         result = result * base;
//     }
//     return result;
// }
// int nthRoot(int X , int N){
//     for(int k = 1;pow(k,N)<=X;k++){
//         if(pow(k,N)==X){
//             return k;
//         }
//     }
//     return -1;
// }
// int main (){
//     int X,N;
//     cout<< "enter the number(X): ";
//     cin>>X;
//     cout<<"enter the root(N): ";
//     cin>>N;

//     int result = nthRoot(X,N);
//     if(result != -1){
//         cout << "The " << N << "th root of " << X << " is " << result << endl;
//     } else {
//         cout << X << " does not have an integer " << N << "th root." << endl;
//     }

//     return 0;
// }



// optimal approach



#include <bits/stdc++.h>
using namespace std;

// Helper function to check mid^n compared to target:
// Returns 1 if mid^n == target
// Returns 0 if mid^n < target
// Returns 2 if mid^n > target
int powerCheck(int base, int exponent, int target) {
    long long result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
        if (result > target) return 2; // Exceeds target
    }
    if (result == target) return 1; // Matches target
    return 0; // Less than target
}

int findNthRoot(int exponent, int target) {
    // Use binary search to find the Nth root:
    int start = 1, end = target;

    while (start <= end) {
        int mid = (start + end) / 2;  // Midpoint of the range
        int result = powerCheck(mid, exponent, target); // Check mid^exponent

        if (result == 1) {
            return mid; // Found the root
        }
        else if (result == 0) {
            start = mid + 1; // Look in the upper half
        }
        else {
            end = mid - 1; // Look in the lower half
        }
    }

    return -1; // If no integer root is found
}

int main() {
    int exponent = 3, target = 27; // Find the 3rd root of 27
    int result = findNthRoot(exponent, target); // Call the function
    cout << "The " << exponent << "th root of " << target << " is: " << result << "\n";
    return 0;
}

