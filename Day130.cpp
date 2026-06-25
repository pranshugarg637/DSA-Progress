//Day-130->Is Graph Bipartite?
// All Paths From Source to Target

//Problem link->https://leetcode.com/problems/is-graph-bipartite/description/
//level->Medium
//topic->Graph

// class Solution {
// public:
//     bool bipartiteHelper(int start,int V,vector<vector<int>>&graph,vector<bool>&vis){
//         queue<int>q;
//         vector<int>color(V,-1);
//         q.push(start);
//         color[start]=0;
//         vis[start]=true;
//         while(q.size()>0){
//             int u=q.front();
//             q.pop();
//             vector<int>neigh=graph[u];
//             for(int v:neigh){
//                 if(!vis[v]){
//                     vis[v]=true;
//                     color[v]=!color[u];
//                     q.push(v);
//                 }else{
//                     if(color[v]==color[u]){
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;
//     }
//     bool isBipartite(vector<vector<int>>& graph) {
//         int V=graph.size();
//         vector<bool>vis(V,false);
//         for(int i=0;i<V;i++){ // also check for disconnected components
//             if(!vis[i]){
//                 if(!bipartiteHelper(i,V,graph,vis)){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };





//Problem link->https://leetcode.com/problems/all-paths-from-source-to-target/description/
//Level->Medium
//Topic->Graph

// class Solution {
// public:
//     void allPaths(int src,int dest,vector<vector<int>>&graph,vector<vector<int>>&ans,vector<bool>&vis,vector<int>temp){
//         vis[src]=true;
//         temp.push_back(src);
//         if(src==dest){
//             ans.push_back(temp);
//             vis[src]=false;
//             return;
//         }
//         vector<int>neigh=graph[src];
//         for(int v:neigh){
//             if(!vis[v]){
//                 allPaths(v,dest,graph,ans,vis,temp);
//             }
//         }
//         vis[src]=false;
//     }
//     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//         int n=graph.size();
//         vector<bool>vis(n,false);
//         vector<vector<int>>ans;
//         allPaths(0,n-1,graph,ans,vis,{});
//         return ans;
//     }
// };