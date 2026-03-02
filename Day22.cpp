//Day22->Kth Largest Sum in a Binary Tree
//Problem link->https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/
//Level-> Medium
//Topic->Binary trees
//approach-> using level order traversal and then adding elements and then sorting vector at last



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     long long kthLargestLevelSum(TreeNode* root, int k) {
//         if(!root){
//             return -1;
//         }
//         long long sum=0;
//         queue<TreeNode*>q;
//         vector<long long>temp;
//         q.push(root);
//         while(!q.empty()){
//             int currHeight=q.size();
//             for(int i=0;i<currHeight;i++){
//                 TreeNode* curr=q.front();
//                 q.pop();
//                 sum+=curr->val;
//                 if(curr->left!=NULL){
//                     q.push(curr->left);
//                 }
//                 if(curr->right!=NULL){
//                     q.push(curr->right);
//                 }
//             }
//             temp.push_back(sum);
//             sum=0;
//         }
//         if(k>temp.size()){
//             return -1;
//         }
//         sort(temp.begin(),temp.end(),greater<long long>());
//         return temp[k-1];
//     }
// };