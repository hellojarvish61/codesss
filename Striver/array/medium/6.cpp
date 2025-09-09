#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
    int minPrice = prices[0]; 
    int maxProfit = 0;       

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price;
        }
                int profit = price - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max profit is: " << maxProfit(prices) << endl;
    return 0;
}
