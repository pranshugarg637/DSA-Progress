//Day-54->Search Insert Position

//Problem link->https://leetcode.com/problems/search-insert-position/description/
//Level->Easy
//Topic->Array/vector and binary search
//Approach->Binary search

// class Solution {
// public:
//     int findAns(vector<int>&nums,int target,int st,int end){
//         if(st>end){
//             return st;
//         }
//         int temp;
//         int mid=st+(end-st)/2;
//         if(nums[mid]==target){
//             return mid;
//         }
//         if(nums[mid]>target){
//             temp=findAns(nums,target,st,mid-1);
//         }
//         if(nums[mid]<target){
//             temp=findAns(nums,target,mid+1,end);
//         }
//         return temp;
//     }
//     int searchInsert(vector<int>& nums, int target) {
//         int ans=-1;
//         int n=nums.size();
//         ans=findAns(nums,target,0,n-1);
//         return ans;
//     }
// };