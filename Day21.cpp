//Day 21->Diameter of Binary tree
//subtree of another tree


//problem link->https://leetcode.com/problems/diameter-of-binary-tree/description/
//level->easy
//topic->binary tree

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
//     int height(TreeNode* root){
//         if(root==NULL){
//             return 0;
//         }
//         int leftHeight=height(root->left);
//         int rightHeight=height(root->right);
//         int currHeight=max(leftHeight,rightHeight)+1;
//         return currHeight;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int rootDiam=height(root->left)+height(root->right);
//         int leftDiam=diameterOfBinaryTree(root->left);
//         int RightDiam=diameterOfBinaryTree(root->right);
//         return max(rootDiam,max(leftDiam,RightDiam));
//     }
// };







//problem link->https://leetcode.com/problems/subtree-of-another-tree/description/
//level->easy
//topic->binary tree
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
//     bool identical(TreeNode* root1,TreeNode* root2){
//         if(root1==NULL && root2==NULL){
//             return true;
//         }else if(root1==NULL || root2==NULL){
//             return false;
//         }
//         if(root1->val!=root2->val){
//             return false;
//         }
//         return (identical(root1->left,root2->left) && identical      (root1->right,root2->right));
//     }
//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//         if(root==NULL && subRoot==NULL){
//             return true;
//         }else if(root==NULL || subRoot==NULL){
//             return false;
//         }
//         if(root->val==subRoot->val){
//             if(identical(root,subRoot)){
//                 return true;
//             }
//         }
//         int Left=isSubtree(root->left,subRoot);
//         if(!Left){
//             return isSubtree(root->right,subRoot);
//         }
//         return true;
//     }
// };