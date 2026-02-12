//Day 1 -> nQueens problem
//Problem Link ->https://leetcode.com/problems/n-queens/description/
//Difficulty -> Hard
//Topic ->Backtracking
//TC -> O(N!) kyuki pehle n choices to place (rows) phirr n-1 then n-2 etc...

//Approach -> Agar ek queen ko ek row mein place kr diya toh uske baad uss row mein koi queen nhi aa sakti.Iska matlab ki N rows mein Nqueens place krna

// class Solution {
// public:
//     vector<vector<string>>ans;
//     bool isSafe(vector<vector<char>>&board,int row, int col){
//         int n=board.size();
//         //horizontal Safety
//         for(int i=0;i<n;i++){//yaha pe n x n ka board hai toh col a size bhi n hi hai
//             if(board[row][i]=='Q'){
//                 return false;
//             }
//         }
//         //vertical safety
//         for(int i=0;i<row;i++){//sirf upar ka check kara kyuki hum upar se row wise queens ko bithana start kr rahe hai. toh neeche queen hone ka koi chance hi nhi hai
//             if(board[i][col]=='Q'){
//                 return false;
//             }
//         }
//         //diagonal left safety
//         for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//             if(board[i][j]=='Q'){
//                 return false;
//             }
//         }
//         //diagonal right
//         for(int i=row,j=col;i>=0 && j<n;i--,j++){
//             if(board[i][j]=='Q'){
//                 return false;
//             }
//         }
//         return true;
//     }
//     void nQueens(vector<vector<char>>&board,int row){
//         int n=board.size();
//         if(row==n){
//             vector<string>temp;
//             for(int i=0;i<n;i++){
//                 temp.push_back(string(board[i].begin(),board[i].end()));
//             }
//             ans.push_back(temp);
//             return;
//         }
//         for(int j=0;j<n;j++){
//             if(isSafe(board,row,j)){
//                 board[row][j]='Q';//safe hone ke baad agar uss row mwin place krdi queen toh firr next row mein check
//                 nQueens(board,row+1);
//                 board[row][j]='.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<char>>board(n,vector<char>(n,'.'));
//         nQueens(board,0);
//         return ans;
//     }
// };


// bahut tagda sawal tha 