#include<iostream>
#include <vector>
using namespace std;
class Solution { 
public: 
    int search(std::vector<int>& nums, int target) { 
        int n = nums.size(); 
        int l = 0, h = n - 1; 

        while (l <= h) { 
            // Prevents potential integer overflow compared to (l + h) >> 1
            int mid = l + ((h - l) >> 1); 

            if (nums[mid] == target) { 
                return mid; 
            } 

            // Check if the left half is sorted
            if (nums[l] <= nums[mid]) { 
                if (nums[l] <= target && target < nums[mid]) {
                    h = mid - 1; 
                } else {
                    l = mid + 1; 
                }
            } 
            // Otherwise, the right half must be sorted
            else { 
                if (nums[mid] < target && target <= nums[h]) {
                    l = mid + 1; 
                } else {
                    h = mid - 1; 
                }
            } 
        } 
        return -1; // Corrected integer return statement
    } 
};
