//Day-47 -> Univalued Binary tree
//problem link->https://leetcode.com/problems/univalued-binary-tree/
//topic->Binary trees
//Approach-> simple traversal on left and right subtree

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
//     bool isUnivalTree(TreeNode* root) {
//         bool leftAns=false;
//         bool rightAns=false;
//         int x=root->val;
//         if(root->left==NULL && root->right==NULL){
//             return true;
//         }
//         if(root->left){
//             int val1=root->left->val;
//             if(x==val1){
//                 leftAns=isUnivalTree(root->left);
//             }
//         }else{
//             leftAns=true;
//         }
//         if(root->right){
//             int val2=root->right->val;
//             if(x==val2){
//                 rightAns=isUnivalTree(root->right);
//             }
//         }else{
//             rightAns=true;
//         }
//         return leftAns && rightAns;
//     }
// };
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
//     bool isUnivalTree(TreeNode* root) {
//         bool leftAns=false;
//         bool rightAns=false;
//         if(root==NULL){
//             return true;
//         }
//         if(root->left==NULL && root->right==NULL){
//             return true;
//         }
//         int x=root->val;
//         if(root->left){
//             if(root->left->val==root->val){
//                 leftAns=isUnivalTree(root->left);
//             }else{
//                 leftAns=false;
//             }
//         }else{
//             leftAns=true;
//         }
//         if(root->right){
//             if(root->right->val==root->val){
//                 rightAns=isUnivalTree(root->right);
//             }else{
//                 rightAns=false;
//             }
//         }else{
//             rightAns=true;
//         }
//         return (leftAns && rightAns);
//     }
// };