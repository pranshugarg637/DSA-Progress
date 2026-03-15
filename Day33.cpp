//Day 33->Insert into Binary Search Tree
//Univalued Binary Tree
//Invert Binary tree
//Delete leaves with a given value


//problem link->https://leetcode.com/problems/insert-into-a-binary-search-tree/description/
//level->Medium
//Topic->Binary Tree
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
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root==NULL){
//             root=new TreeNode(val);
//         }
//         if(root->val<val){
//             root->right=insertIntoBST(root->right,val);
//         }
//         else if(root->val>val){
//             root->left=insertIntoBST(root->left,val);
//         }
//         return root;
//     }
// };




//problem link->https://leetcode.com/problems/univalued-binary-tree/description/
//Level->easy
//topic->Binary tree
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




//problem link->https://leetcode.com/problems/invert-binary-tree/description/
//level->Easy
//topic->Binary Tree
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
//     TreeNode* invertTree(TreeNode* root) {
//         if(root==NULL){
//             return NULL;
//         }
//         TreeNode* lef=NULL;
//         TreeNode* righ=NULL;
//         if(root->left==NULL && root->right==NULL){
//             return root;
//         }
//         if(root->left){
//             lef=invertTree(root->left);
//         }
//         if(root->right){
//             righ=invertTree(root->right);
//         }
//         TreeNode* temp=lef;
//         root->left=root->right;
//         root->right=temp;
//         return root;
//     }
// };




//problem link->https://leetcode.com/problems/delete-leaves-with-a-given-value/description/
//level->medium
//topic->Binary tree
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
//     TreeNode* removeLeafNodes(TreeNode* root, int target) {
//         TreeNode* leftNode=NULL;
//         TreeNode* rightNode=NULL;
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->left==NULL && root->right==NULL){
//             return root;
//         }
//         if(root->left){
//             leftNode=removeLeafNodes(root->left,target);
//         }
//         if(root->right){
//             rightNode=removeLeafNodes(root->right,target);
//         }
//         if(leftNode){
//             if(leftNode->val==target){
//                 root->left=NULL;
//             }
//         }
//         if(rightNode){
//             if(rightNode->val==target){
//                 root->right=NULL;
//             }
//         }
//         return root;
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
//     TreeNode* removeLeafNodes(TreeNode* root, int target) {
//         if(root==NULL){
//             return NULL;
//         }
//         TreeNode* leftNode=removeLeafNodes(root->left,target);
//         TreeNode* rightNode=removeLeafNodes(root->right,target);
//         if((leftNode==NULL && rightNode==NULL) && root->val==target){
//             return NULL;
//         }
//         root->left=leftNode;
//         root->right=rightNode;
//         return root;
//     }
// };