 //  Aggressive Cows 

#include<bits/stdc++.h>
using namespace std;
bool canPlaceCows(vector<int>& stallPositions, int minDistance, int totalCows) {
    int cowCount = 1; // Start by placing the first cow in the first stall
    int lastCowPosition = stallPositions[0]; // Position of the last placed cow

    for (int i = 1; i < stallPositions.size(); i++) {
        // Check if the current stall is at least 'minDistance' away from the last cow
        if (stallPositions[i] - lastCowPosition >= minDistance) {
            cowCount++; // Place a cow in the current stall
            lastCowPosition = stallPositions[i]; // Update the position of the last placed cow
        }
        if (cowCount >= totalCows) {
            return true; // If all cows are placed successfully
        }
    }
    return false; // Not enough stalls to place all cows with 'minDistance'
}
int findMaxMinDistance(vector<int>&stallPositions,int totalCows){
    sort(stallPositions.begin(),stallPositions.end());
    int maxPossibleDistance = stallPositions.back() - stallPositions.front();
    for(int minDistance = 1;minDistance<=maxPossibleDistance;minDistance++){
        if(!canPlaceCows(stallPositions,totalCows,minDistance)){
            return minDistance - 1;
        }
    }
    return maxPossibleDistance;
}
int main (){
    vector<int>stallPosition = {0,3,4,7,10,9};
    int totalCows = 4;
    int result = findMaxMinDistance(stallPosition,totalCows);
    cout<< "the max possible min dis is: "<< result << "endl";
}








#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check if it's possible to place cows with at least 'minDist' distance between them
bool canPlaceCows(const vector<int>& stalls, int minDist, int cows) {
    int placedCows = 1; // Place the first cow in the first stall
    int lastPosition = stalls[0]; // Position of the last placed cow

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPosition >= minDist) { // Check distance
            placedCows++; // Place the cow
            lastPosition = stalls[i]; // Update the last cow's position
            if (placedCows == cows) return true; // All cows placed successfully
        }
    }
    return false; // Not enough distance to place all cows
}

// Find the largest minimum distance to place all cows
int getMaxMinDistance(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end()); // Sort stalls for proper placement

    int low = 1; // Smallest possible distance
    int high = stalls.back() - stalls.front(); // Largest possible distance
    int bestDistance = 0; // Store the result

    while (low <= high) {
        int mid = (low + high) / 2; // Middle distance to test

        if (canPlaceCows(stalls, mid, cows)) {
            bestDistance = mid; // Update result if placement is possible
            low = mid + 1; // Try for a larger minimum distance
        } else {
            high = mid - 1; // Try for a smaller minimum distance
        }
    }

    return bestDistance; // Return the largest valid minimum distance
}

int main() {
    vector<int> stalls = {0, 3, 4, 7, 10, 9}; // Stall positions
    int cows = 4; // Number of cows

    int result = getMaxMinDistance(stalls, cows);
    cout << "The maximum possible minimum distance is: " << result << endl;

    return 0;
}
