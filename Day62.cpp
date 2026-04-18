//Day-62->Subarray Sum Equals K
//problem link->https://leetcode.com/problems/subarray-sum-equals-k/description/

//level->Medium
//topic->unordered map
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int,int>m;
//         int sum=0;
//         int ans=0;
//         m[0]=1;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             if(m.count(sum-k)){
//                 ans+=m[sum-k];
//             }
//             if(m.count(sum)){
//                 m[sum]++;
//             }else{
//                 m[sum]=1;
//             }
//         }
//         return ans;
//     }
// };