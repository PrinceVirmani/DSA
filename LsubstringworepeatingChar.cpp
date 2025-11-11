#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128, 0);
        int n = s.size();
        int l=0;
        int ans=0;

        for(int r=0; r<n; r++){
            char c = s[r];
            freq[c]++;

            while(freq[c]>1){
            freq[s[l]]--;
            l++;
            }   
            ans = max(ans, r-l+1);
        }
        return ans;
    }

};