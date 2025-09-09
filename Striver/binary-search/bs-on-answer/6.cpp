// // Capacity to Ship Packages within D Days

// #include <bits/stdc++.h>
// using namespace std;
// int findDays(vector<int>&weights ,int i){
//     int days = 1;
//     int load = 0;
//     int n = weights.size();
//     for(int i = 0;i<n;i++){
//         if(load+weights[i]>i){
//             days +=1;//move to next day
//             load = weights[i]; //load the weight.
//         }
//     else{
//         //load the weight on the same day.
//         load  += weights[i];
//     }
//     }
//     return days;
// }
// int leastWeightCapacity(vector<int>&weights,int d){
//     int maxi = *max_element(weights.begin(),weights.end());
//     int sum = accumulate(weights.begin(),weights.end(),0);
// // i = capacity 
//     for(int i = maxi ;i<=sum ;i++){
//         if(findDays(weights,i)<=d){
//             return i;
//         }
//     }
//     return -1;
// }
// int main (){
//     vector<int> weights = {5,4,5,2,3,4,5,6};
//     int d = 5;
//     int ans = leastWeightCapacity(weights,d);
//     cout<<" the minimum capapcity should be "<< ans << endl;
// }


// using all the function 

// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the maximum element in the array
// int findMax(vector<int> &weights) {
//     int maxElement = weights[0];
//     for (int i = 1; i < weights.size(); i++) {
//         if (weights[i] > maxElement) {
//             maxElement = weights[i];
//         }
//     }
//     return maxElement;
// }

// // Function to find the sum of the elements in the array
// int findSum(vector<int> &weights) {
//     int totalSum = 0;
//     for (int i = 0; i < weights.size(); i++) {
//         totalSum += weights[i];
//     }
//     return totalSum;
// }

// int findDays(vector<int> &weights, int cap) {
//     int days = 1; // First day
//     int load = 0;
//     int n = weights.size(); // Size of array
//     for (int i = 0; i < n; i++) {
//         if (load + weights[i] > cap) {
//             days += 1; // Move to the next day
//             load = weights[i]; // Load the weight
//         } else {
//             // Load the weight on the same day
//             load += weights[i];
//         }
//     }
//     return days;
// }

// int leastWeightCapacity(vector<int> &weights, int d) {
//     // Use the custom findMax and findSum functions
//     int maxi = findMax(weights);
//     int sum = findSum(weights);

//     for (int i = maxi; i <= sum; i++) {
//         if (findDays(weights, i) <= d) {
//             return i;
//         }
//     }
//     // Dummy return statement
//     return -1;
// }

// int main()
// {
//     vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
//     int d = 5;
//     int ans = leastWeightCapacity(weights, d);
//     cout << "The minimum capacity should be: " << ans << "\n";
//     return 0;
// }



// optimal approach


#include<bits/stdc++.h>
using namespace std;
 int findDays(vector<int>&weights ,int i){
    int days = 1;
    int load = 0;
    int n = weights.size();
    for(int i = 0;i<n;i++){
        if(load+weights[i]>i){
            days +=1;//move to next day
            load = weights[i]; //load the weight.
        }
    else{
        //load the weight on the same day.
        load  += weights[i];
    }
    }
    return days;
}
int leastWeightCapacity(vector<int>&weights,int d){
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int numberOfDays = findDays(weights,mid);
        if(numberOfDays<=d){
            //eliminate right half
            high = mid-1;
        }
        else{
            // eliminate left half
        }
    }
    return low;
}
int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}
