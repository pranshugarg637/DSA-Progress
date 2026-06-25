//Day-131-> Course Schedule
// Course Schedule-2

//Problem link->https://leetcode.com/problems/course-schedule/description/
//Level->Medium
//Topic->Graph

// class Solution {
// public:
//     bool isCycle(int src,vector<bool>&vis,vector<bool>&rec,vector<vector<int>>&graph){
//         vis[src]=true;
//         rec[src]=true;
//         for(int i=0;i<graph.size();i++){
//             int u=graph[i][1];
//             int v=graph[i][0];
//             if(u==src){
//                 if(!vis[v]){
//                     if(isCycle(v,vis,rec,graph)){
//                         return true;
//                     }
//                 }else{
//                     if(rec[v]){
//                         return true;
//                     }
//                 }
//             }
//         }
//         rec[src]=false;
//         return false;
//     }
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         int V=numCourses;
//         vector<bool>vis(V,false);
//         vector<bool>rec(V,false);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(isCycle(i,vis,rec,prerequisites)){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };






//Problem link->https://leetcode.com/problems/course-schedule-ii/description/
//Topic->Graph
//Level->Medium

// class Solution {
// public:
//     bool isCycle(int src,vector<bool>&vis,vector<bool>&rec,vector<vector<int>>&graph){
//         vis[src]=true;
//         rec[src]=true;
//         for(int i=0;i<graph.size();i++){
//             int u=graph[i][1];
//             int v=graph[i][0];
//             if(u==src){
//                 if(!vis[v]){
//                     if(isCycle(v,vis,rec,graph)){
//                         return true;
//                     }
//                 }else{
//                     if(rec[v]){
//                         return true;
//                     }
//                 }
//             }
//         }
//         rec[src]=false;
//         return false;
//     }
//     void topoHelper(int src,vector<bool>&vis,stack<int>&s,vector<vector<int>>&graph){
//         vis[src]=true;
//         for(int i=0;i<graph.size();i++){
//             int u=graph[i][1];
//             int v=graph[i][0];
//             if(u==src){
//                 if(!vis[v]){
//                     topoHelper(v,vis,s,graph);
//                 }
//             }
//         }
//         s.push(src);
//     }
//     vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//         int V=numCourses;
//         vector<bool>vis(V,false);
//         vector<bool>rec(V,false);
//         vector<int>ans;
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(isCycle(i,vis,rec,prerequisites)){
//                     return ans;
//                 }
//             }
//         }
//         //matlab ki topological sort possible hai
//         stack<int>s;
//         for(int i=0;i<V;i++){
//             vis[i]=false;
//         }
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 topoHelper(i,vis,s,prerequisites);
//             }
//         }
//         //s ko pop krke ans mein store
//         while(!s.empty()){
//             ans.push_back(s.top());
//             s.pop();
//         }
//         return ans;
//     }
// };