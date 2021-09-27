// HackerRank Challenge - Stock Maximize
// Author - HackerRank
// 
// Solved on: Sep 26, 2021
// Solved by: Georgi Nikolov
//

#include<iostream>
#include<vector>
using namespace std;


// Algorithm for determining max profit
long stockMax(vector<int> prices) {
    long profit;
    int maximum = prices[prices.size() - 1];

    for(int i = prices.size() - 2; i >= 0; i--) {
        maximum = max(maximum, prices[i + 1]);
        // max() = The largest of the values passed as arguments.

        if(prices[i] < maximum) {
            profit = profit + (maximum - prices[i]);
        }  // Determining profit margin
    }

    return profit;
}


int main() {
    vector<int> prices;
    // Populate vector with days & prices

    long sol = 0;

    sol = stockMax(prices);
    cout<<sol<<endl;


    return 0;
}