//Day-56->Last stone weight

//Problem link->https://leetcode.com/problems/last-stone-weight/description/
//Level->Easy
//Topic->Priority Queue ans heaps

// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//         priority_queue<int>pq(stones.begin(),stones.end());
//         while(pq.size()!=1){
//             int max1=pq.top();
//             pq.pop();
//             int max2=pq.top();
//             pq.pop();
//             if(max1!=max2){
//                 int newV=max1-max2;
//                 pq.push(newV);
//             }
//             if(max1==max2){
//                 pq.push(0);
//             }
//         }
//         return pq.top();
//     }
// };