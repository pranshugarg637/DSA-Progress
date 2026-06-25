//Day-128->Find if Path Exists in Graph

//Level->Easy
//Topic->Graph
//problem link->https://leetcode.com/problems/find-if-path-exists-in-graph/description/

// class Solution {
// public:
//     bool search(int src,int dest,vector<vector<int>>&neighbours,vector<bool>&vis){
//         if(src==dest){
//             return true;
//         }
//         vis[src]=true;
//         for(int v:neighbours[src]){
//             if(!vis[v]){
//                 if(search(v,dest,neighbours,vis)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
//     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//         vector<vector<int>>neighbours(n);
//         for(auto edge:edges){
//             neighbours[edge[0]].push_back(edge[1]);
//             neighbours[edge[1]].push_back(edge[0]);
//         }
//         vector<bool>vis(n,false);
//         return search(source,destination,neighbours,vis);
//     }
// };
