//Day-25->Find the Duplicate Number
//Problem link->https://leetcode.com/problems/find-the-duplicate-number/description/
//topic-> Array
//level-> Medium

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int count=0;
//         int freq[100001]={0};
//         for(int i=0;i<nums.size();i++){
//             freq[nums[i]]++;
//         }
//         for(int i=0;i<100001;i++){
//             if(freq[i]>1){
//                 count=i;
//             }
//         }
//         return count;
//     }
// };