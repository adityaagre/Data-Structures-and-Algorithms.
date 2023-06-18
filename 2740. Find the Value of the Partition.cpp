/*

https://leetcode.com/contest/weekly-contest-350/problems/find-the-value-of-the-partition/

2740. Find the Value of the Partition

You are given a positive integer array nums.

Partition nums into two arrays, nums1 and nums2, such that:

Each element of the array nums belongs to either the array nums1 or the array nums2.
Both arrays are non-empty.
The value of the partition is minimized.
The value of the partition is |max(nums1) - min(nums2)|.

Here, max(nums1) denotes the maximum element of the array nums1, and min(nums2) denotes the minimum element of the array nums2.

Return the integer denoting the value of such partition.

*/




class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        
        int diff;
        
        auto i = nums.begin();
        
        int min = abs((*i) - (*(i+1)));
       
        
        
         for (auto i = nums.begin(); (i+1) != nums.end(); ++i)
        {
             
             diff = abs((*i) - (*(i+1)));
             
             if (diff < min)
             {
                 min = diff;
             }
             
             
             
            
        }
        
        return min;
        
        
        
       
        
        
       
        
    }
};
