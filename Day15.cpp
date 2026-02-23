//Day 15->Non Overlapping Intervals
//Minimum Absolute Difference
//Maximum length of chain pair



//problem link->https://leetcode.com/problems/non-overlapping-intervals/description/
//topic-> greedy algorithm
//level->medium

// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         int n=intervals.size();
//         sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
//             return a[1]<b[1];
//         });
//         int count=1;//sabse pehli waali selected
//         int currTime=intervals[0][1];
//         for(int i=1;i<n;i++){
//             if(intervals[i][0]>=currTime){
//                 count++;
//                 currTime=intervals[i][1];
//             }
//         }
//         return n-count;
//     }
// };




//problem link->https://leetcode.com/problems/minimum-absolute-difference/description/
//level->Easy
//topic-> Greedy Algorithm

// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         vector<vector<int>>ans;
//         int minDiff=INT_MAX;
//         sort(arr.begin(),arr.end());
//         int n=arr.size();
//         for(int i=0;i<n-1;i++){
//             int diff=abs(arr[i]-arr[i+1]);
//             minDiff=min(minDiff,diff);
//         }
//         for(int i=0;i<n-1;i++){
//             vector<int>temp;
//             if(abs(arr[i]-arr[i+1])==minDiff){
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[i+1]);
//             }
//             if(temp.size()!=0){
//                 ans.push_back(temp);
//             }
//         }
//         return ans;
//     }
// };



//problem link->https://leetcode.com/problems/maximum-length-of-pair-chain/description/
//topic->Greedy Algorithm
//level-> Medium

// class Solution {
// public:
//     int findLongestChain(vector<vector<int>>& pairs) {
//         int n= pairs.size();
//         sort(pairs.begin(),pairs.end(),[](vector<int>&a, vector<int>&b){
//         return a[1]<b[1];
//     });
//         int ans=1;
//         int currEnd=pairs[0][1];
//         for(int i=1;i<pairs.size();i++){
//             if(pairs[i][0]>currEnd){
//                 ans++;
//                 currEnd=pairs[i][1];
//             }
//         }
//         return ans;
//     }
// };