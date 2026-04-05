//Day-55->Sliding Window Maximum

//Problem link->https://leetcode.com/problems/sliding-window-maximum/description/
//Level->Hard
//Topic->Used Priority queue
//Approach Used->Pq ke top se tab tak pop krne ki zaroorat nahi hai jab tak top waale ka index window mein hai

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int>ans;
//         priority_queue<pair<int,int>>pq;//number,index
//         for(int i=0;i<k;i++){
//             pq.push(make_pair(nums[i],i));
//         }
//         ans.push_back(pq.top().first);
//         for(int i=k;i<nums.size();i++){
//             while(!pq.empty() && pq.top().second<=(i-k)){
//                 pq.pop();
//             }
//             pq.push(make_pair(nums[i],i));
//             ans.push_back(pq.top().first);
//         }
//         return ans;
//     }
// };