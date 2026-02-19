//Day 4-> Check Knights tour configuration
//Problem link ->https://leetcode.com/problems/check-knight-tour-configuration/description/
//difficulty->medium
//topic->backtracking

//approach-> start from [0][0] and then check for each move that the knight can make 

// class Solution {
// public:
//     bool isSafe(vector<vector<int>>&grid,int row,int col){
//         int n=grid.size();
//         if(row>=n || col>=n || row<0 || col<0){
//             return false;
//         }
//         return true;
//     }
//     bool helper(vector<vector<int>>&grid,int start,int end,int row,int col){
//         if(!isSafe(grid,row,col)){
//             return false;
//         }
//         if(grid[row][col]!=start){
//             return false;
//         }
//         if(start==end){
//             return true;
//         }
//         int next=start+1;
//         //right down
//         if(helper(grid,next,end,row+1,col+2)){
//             return true;
//         }
//         //right up
//         if(helper(grid,next,end,row-1,col+2)){
//             return true;
//         }
//         //up right
//         if(helper(grid,next,end,row-2,col+1)){
//             return true;
//         }
//         //up left
//         if(helper(grid,next,end,row-2,col-1)){
//             return true;
//         }
//         //left up
//         if(helper(grid,next,end,row-1,col-2)){
//             return true;
//         }
//         //left down
//         if(helper(grid,next,end,row+1,col-2)){
//             return true;
//         }
//         //down left
//         if(helper(grid,next,end,row+2,col-1)){
//             return true;
//         }
//         //down right
//         if(helper(grid,next,end,row+2,col+1)){
//             return true;
//         }
//         return false;
//     }
//     bool checkValidGrid(vector<vector<int>>& grid) {
//         if(grid[0][0]!=0){
//             return false;
//         }
//         int n=grid.size();
//         int start=0;
//         int end=(n*n)-1;
//         return helper(grid,start,end,0,0);
//     }
// };
