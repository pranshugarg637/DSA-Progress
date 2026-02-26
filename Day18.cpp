//Day 18-> Best time to buy and sell stocks(Different approach)
//Binary tree preorder traversal
//Binary tree inorder traversal
//Binary tree postorder traversal

//problem link->https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//topic->Binary trees
//level->easy
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int maxProfit=0;
//         vector<pair<int,int>>price;
//         for(int i=0;i<n;i++){
//             price.push_back(make_pair(prices[i],i));
//         }
//         pair<int,int>minPair=price[0];
//         for(int i=1;i<n;i++){
//             if(price[i].first>minPair.first){
//                 int profit = price[i].first - minPair.first;
//                 maxProfit = max(maxProfit, profit);
//             }
//             if(price[i].first<minPair.first){
//                 minPair=price[i];
//             }
//         }
//         return maxProfit;
//     }
// };

// // class Solution {
// // public:
// //     int maxProfit(vector<int>& prices) {
// //         vector<int>bestBuy(100000);
// //         bestBuy[0]=INT_MAX;
// //         for(int i=1;i<prices.size();i++){
// //             bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
// //         }
// //         int maxProfit=0;
// //         for(int i=0;i<prices.size();i++){
// //             int currProfit=prices[i]-bestBuy[i];
// //             maxProfit=max(maxProfit,currProfit);
// //         }
// //         return maxProfit;
// //     }
// // };




//problem link->https://leetcode.com/problems/binary-tree-preorder-traversal/description/
//problem link->https://leetcode.com/problems/binary-tree-inorder-traversal/description/
//problem link->https://leetcode.com/problems/binary-tree-postorder-traversal/description/
//topic->Binary trees
//level-> easy

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void preOrder(TreeNode* root,vector<int>&preOrderr){
//         if(root==NULL){
//             return;
//         }
//         preOrderr.push_back(root->val);
//         preOrder(root->left,preOrderr);
//         preOrder(root->right,preOrderr);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>preOrderr;
//         preOrder(root,preOrderr);
//         return preOrderr;
//     }
// };

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void helper(TreeNode* root,vector<int>&inOrderr){
//         if(root==NULL){
//             return;
//         }
//         helper(root->left,inOrderr);
//         inOrderr.push_back(root->val);
//         helper(root->right,inOrderr);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>inOrderr;
//         helper(root,inOrderr);
//         return inOrderr;
//     }
// };

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void helper(TreeNode* root,vector<int>&postOrderr){
//         if(root==NULL){
//             return;
//         }
//         helper(root->left,postOrderr);
//         helper(root->right,postOrderr);
//         postOrderr.push_back(root->val);
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>postOrderr;
//         helper(root,postOrderr);
//         return postOrderr;
//     }
// };