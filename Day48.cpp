//Day-48->Invert Binary Tree
// Delete Leaves With a Given Value
// Construct Binary Search Tree from Preorder Traversal
// Construct Binary Search Tree from Preorder Traversal

//Topic-> Binary trees

//problem link->https://leetcode.com/problems/invert-binary-tree/description/
//Approach-> neeche neeche jaake pehle neeche waalo ko swap karo and then root
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
//         TreeNode* leftNode=NULL;
//         TreeNode* rightNode=NULL;
//         if(root->left==NULL && root->right==NULL){
//             return root;
//         }
//         if(root->left){
//             leftNode=invertTree(root->left);
//         }
//         if(root->right){
//             rightNode=invertTree(root->right);
//         }
//         TreeNode* temp=leftNode;
//         root->left=root->right;
//         root->right=temp;
//         return root;
//     }
// };



//problem link->https://leetcode.com/problems/delete-leaves-with-a-given-value/description/
//topic->Binary trees
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

//         TreeNode* leftNode=NULL;
//         TreeNode* rightNode=NULL;
//         if(root->left){
//             leftNode=removeLeafNodes(root->left,target);
//         }
//         if(root->right){
//             rightNode=removeLeafNodes(root->right,target);
//         }
//         if(leftNode==NULL && rightNode==NULL){
//             if(root->val==target){
//                 return NULL;
//             }
//         }
//         root->left=leftNode;
//         root->right=rightNode;
//         return root;
//     }
// };




//problem link->https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/
//Topic->Binary Search trees
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
//     TreeNode* insert(TreeNode* root,int el){
//         if(root==NULL){
//             root=new TreeNode(el);
//             return root;
//         }
//         if(root->val<el){
//             root->right=insert(root->right,el);
//         }
//         else if(root->val>el){
//             root->left=insert(root->left,el);
//         }
//         return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         TreeNode* root=NULL;
//         for(int i=0;i<preorder.size();i++){
//             root=insert(root,preorder[i]);
//         }
//         return root;
//     }
// };





//Problem link->https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
//Topic->BST
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
//     TreeNode* insert(vector<int>&nums,int st,int end){
//         if(st>end){
//             return NULL;
//         }
//         int mid=st+(end-st)/2;
//         TreeNode* root=new TreeNode(nums[mid]);
//         root->left=insert(nums,st,mid-1);
//         root->right=insert(nums,mid+1,end);
//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return insert(nums,0,nums.size()-1);
//     }
// };
//height balanced tree ka matlab left and right mein almost same length of tree's subtree
//kyuki yaha already sorted hai vector toh no need to check for left and right values and apart from that height balanced banane ke liye we can use concept of mid values like that in binary search jisse ki beech waali root banne and then left and right mein same height