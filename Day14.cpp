//Day 14->Gas station
//problem link->https://leetcode.com/problems/gas-station/description/
//topic-> queues (but solved on leetcode without queues using greedy)
//level-> medium

// //BRUTE FORCE
// // class Solution {
// // public:
// //     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
// //         int n=gas.size();
// //         for(int i=0;i<n;i++){
// //             int start=gas[i];
// //             queue<int>q;
// //             for(int j=i;j<n;j++){
// //                 q.push(j);
// //             }
// //             for(int j=0;j<i;j++){
// //                 q.push(j);
// //             }
// //             while(!q.empty()){
// //                 start=start-cost[q.front()];
// //                 if(start<0){
// //                     break;
// //                 }
// //                 int val=q.front()+1;
// //                 if(val>=n){
// //                     val=0;
// //                 }
// //                 start+=gas[val];
// //                 q.pop();
// //             }
// //             if(q.empty()){
// //                 return i;
// //             }
// //         }
// //         return -1;
// //     }
// // };
// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int n=gas.size();
//         int totalGas=0;
//         int totalCost=0;
//         for(int val:gas){
//             totalGas+=val;
//         }
//         for(int val:cost){
//             totalCost+=val;
//         }
//         if(totalCost>totalGas){
//             return -1;
//         }//agar yahe pe eliminate nahi hua matlab ek index zaroor hai jha se start hoga
//         //warna unique solution exist krta hi hai
//         int start=0;
//         int currGas=0;
//         for(int i=0;i<n;i++){
//             currGas+=(gas[i]-cost[i]);
//             if(currGas<0){
//                 start=i+1;//yaha pe yeh pata chal gaya ki piche ki index pe agar hum jaaeynge toh waha next station tak jaane ka fuel nahi hoga. toh sirf agar aage ke index mein humne check kara and surplus fuel mila matlab ussi mein se kuch answer hoga.
//                 currGas=0;
//             }
//         }
//         return start;
//     }
// };
