#include <iostream>
using namespace std;

class solution{
    int buyAndSellStock(vector<int> arr){
        int buy = arr[0];
        int profit =0;
        for(int i=0; i<arr.size(); i++){
            if(buy > arr[i]){
                buy = arr[i];
            }
            profit = max(profit, arr[i]-buy);
        }
        return profit;
    }
};