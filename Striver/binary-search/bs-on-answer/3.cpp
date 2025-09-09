// Koko Eating Bananas
//brute approch
// #include <bits/stdc++.h>
// using namespace std;

// int findMax(vector<int>bananaPiles){
//     int maxBananas = INT_MAX;
//     int pileCount = bananaPiles.size();
//     for(int i = 0;i<pileCount;i++){
//         if(bananaPiles[i]>maxBananas){
//             maxBananas = bananaPiles[i];
//         }
//     }
//     return maxBananas;
// }
// int calculateTotalHours(vector<int>&bananaPiles,int eatingRate){
//     int totalHours = 0;
//     int pileCount = bananaPiles.size();
//     for(int i = 0 ; i<pileCount;i++){
//         totalHours+=ceil((double)bananaPiles[i]/(double)eatingRate);
//     }
// }
// int minimumRateToEatBananas(vector <int>bananaPiles,int maxHours){
//     int maxBananas = findMax(bananaPiles);
//     for(int eatingRate = 1; eatingRate <= maxBananas;eatingRate++){
//         int RequiredHours = calculateTotalHours(bananaPiles,eatingRate);
//         if(RequiredHours<=maxHours){
//             return eatingRate;
//         }
//     }
//     return maxBananas;
// }
// int main (){
//     vector<int>bananaPile = {7,15,6,3};
//     int maxHours = 8;
//     int result  = minimumRateToEatBananas(bananaPile,maxHours);
//     cout<< "koko should eat at least "<< result << " ";
// }


// better approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum bananas in any pile
int findMaxBananas(vector<int> &bananaPiles) {
    int maxBananas = INT_MIN;
    int pileCount = bananaPiles.size();
    
    // Find the maximum bananas in a single pile
    for (int i = 0; i < pileCount; i++) {
        if (bananaPiles[i] > maxBananas) {
            maxBananas = bananaPiles[i];
        }
    }
    return maxBananas;
}

// Function to calculate the total hours needed to eat all bananas at a given eating rate
int calculateHours(vector<int> &bananaPiles, int eatingRate) {
    int totalHours = 0;
    int pileCount = bananaPiles.size();
    
    // Calculate total hours required for each pile
    for (int i = 0; i < pileCount; i++) {
        totalHours += ceil((double)bananaPiles[i] / (double)eatingRate);
    }
    return totalHours;
}

// Function to find the minimum eating rate to finish all bananas in the given time
int findMinimumEatingRate(vector<int> bananaPiles, int maxHours) {
    int low = 1; // Minimum eating rate (1 banana/hour)
    int high = findMaxBananas(bananaPiles); // Maximum eating rate (largest pile)

    // Apply binary search to find the minimum eating rate
    while (low <= high) {
        int midRate = (low + high) / 2; // Middle point of the current range
        int requiredHours = calculateHours(bananaPiles, midRate);

        // Check if this eating rate allows Koko to finish on time
        if (requiredHours <= maxHours) {
            high = midRate - 1; // Try to reduce the rate
        } else {
            low = midRate + 1; // Increase the rate
        }
    }
    return low; // The minimum rate at which Koko can eat all bananas on time
}

int main() {
    vector<int> bananaPiles = {7, 15, 6, 3}; // Piles of bananas
    int maxHours = 8; // Maximum hours Koko has to finish eating

    int result = findMinimumEatingRate(bananaPiles, maxHours);
    cout << "Koko should eat at least " << result << " bananas/hr.\n";

    return 0;
}
