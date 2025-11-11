#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // sorting the intervals 
        sort(intervals.begin(), intervals.end());

        // storing the ans
        vector<vector<int>> ans;

        // for loop to iterate the intervals and checking the condition 
        // if intervals[i][1] is before the intervals[i+1][0] then only merge
        // otherwise do not merge

        for(int i=0; i<n; i++){

        // if ans is empty 
        // overlapping condition - if intervals[i][0] <= intervals[i-1][1] then overlapping will happen
            if(ans.empty() || intervals[i][0]>  ans.back()[1] ){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};