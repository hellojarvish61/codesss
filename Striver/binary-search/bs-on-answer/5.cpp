// Find the Smallest Divisor Given a Threshold

// #include<bits/stdc++.h>
// using namespace std;
// int findSmallestDivisor(vector<int>& nums ,int maxSum){
//     int maxNum = nums[0];
//     for(int i = 0;i<nums.size();i++){
//         if(nums[i]>maxNum){
//             maxNum = nums[i];
//         }
//     }
//     for(int divisor = 1;divisor<= maxNum;divisor ++){
//         int currentSum = 0;
//         for(int i = 0;i< nums.size();i++){
//             currentSum += ceil((double)nums[i] / divisor);
//         }
//         if(currentSum <= maxSum){
//             return divisor;
//         }
//     }
//     return -1;
// }
// int main (){
//     vector<int>nums = {1,2,3,4,5};
//     int maxSum = 8;
//     int result = findSmallestDivisor(nums,maxSum);
//     cout<< " the minimum divisor is: "<< result << "\n";
//     }






    // optimal code 


    #include <iostream>
#include <vector>
#include <cmath> // For ceil function
using namespace std;

// Function to calculate the sum of ceiling values after division
int calculateSumWithDivisor(vector<int> &numbers, int divisor) {
    int totalSum = 0; // Initialize the total sum

    // Loop through each number in the array
    for (int i = 0; i < numbers.size(); i++) {
        // Divide the number by the divisor, take the ceiling, and add to totalSum
        totalSum += ceil((double)numbers[i] / divisor);
    }

    return totalSum; // Return the calculated sum
}

// Function to find the maximum value in the array
int findMaximumValue(vector<int> &numbers) {
    int maxValue = numbers[0]; // Assume the first element is the largest

    // Loop through the array to find the actual maximum
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    return maxValue; // Return the largest value
}

// Function to find the smallest divisor
int findSmallestDivisor(vector<int> &numbers, int maxAllowedSum) {
    int size = numbers.size(); // Size of the array
    if (size > maxAllowedSum) return -1; // If size exceeds the limit, return -1

    int low = 1; // Smallest possible divisor
    int high = findMaximumValue(numbers); // Largest number in the array (maximum value)
    int ans = -1; // Variable to store the answer

    // Apply binary search to find the smallest divisor
    while (low <= high) {
        int mid = (low + high) / 2; // Midpoint as the divisor
        int currentSum = calculateSumWithDivisor(numbers, mid); // Calculate the sum using mid as the divisor

        // If the current sum is within the allowed limit, update ans and try a smaller divisor
        if (currentSum <= maxAllowedSum) {
            ans = mid;       // Update the answer
            high = mid - 1;  // Try smaller divisors
        } 
        // Otherwise, increase the divisor to reduce the sum
        else {
            low = mid + 1;
        }
    }

    return ans; // Return the smallest valid divisor
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5}; // Array of numbers
    int maxAllowedSum = 8; // Maximum allowed sum after division

    int smallestDivisor = findSmallestDivisor(numbers, maxAllowedSum); // Find the smallest divisor
    cout << "The minimum divisor is: " << smallestDivisor << "\n"; // Print the result

    return 0;
}
