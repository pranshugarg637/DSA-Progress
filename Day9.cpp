//Day 9-> Largest Rectangle in Histogram
//Topic -> stack
//Level-> Hard
//problem link->https://leetcode.com/problems/largest-rectangle-in-histogram/description/

//approach-> har bar pe jaake check karo ki uss height ke bar mein width vary krke area ki values kya hongi and for that find next smaller right and left kyuki ussi par boundary banegi.

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         //har ek baar pe jaake check karo ki uss height ke bar ke liye width ko vary krke maxArea kya hoga
//         stack<int>s;
//         int n=heights.size();
//         vector<int>nsr(n,0);
//         vector<int>nsl(n,0);
//         nsl[0]=-1;
//         nsr[n-1]=n;
//         //nsl ki values
//         s.push(0);
//         for(int i=1;i<n;i++){
//             while(!s.empty() && heights[i]<=heights[s.top()]){
//                 s.pop();//li top ka element toh answer nahi ho sakta
//             }
//             if(s.empty()){
//                 nsl[i]=-1;
//             }else{
//                 nsl[i]=s.top();
//             }
//             s.push(i);
//         }
//         while(!s.empty()){
//             s.pop();
//         }
//         s.push(n-1);
//         //next smaller right
//         for(int i=n-2;i>=0;i--){
//             while(!s.empty() && heights[i]<=heights[s.top()]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 nsr[i]=n;
//             }else{
//                 nsr[i]=s.top();
//             }
//             s.push(i);
//         }
//         int maxArea=INT_MIN;
//         vector<int>area(n,0);
//         for(int i=0;i<n;i++){
//             area[i]=heights[i]*(nsr[i]-nsl[i]-1);
//         }
//         for(int i=0;i<n;i++){
//             maxArea=max(maxArea,area[i]);
//         }
//         return maxArea;
//     }
// };