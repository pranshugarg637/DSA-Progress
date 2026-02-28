//Day20-> Maximum depth of binary tree
//Count complete tree Nodes
//Sum of Left Leaves

//problem link->https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
//level->easy
//topic->binary trees

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
//     int maxDepth(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int ans1=maxDepth(root->left);
//         int ans2=maxDepth(root->right);
//         return max(ans1,ans2)+1;
//     }
// };





//problem link->https://leetcode.com/problems/count-complete-tree-nodes/description/
//level->easy
//topic->binary trees
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
//     int countNodes(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int ans1=countNodes(root->right);
//         int ans2=countNodes(root->left);
//         return ans1+ans2+1;
//     }
// };



//problem link->https://leetcode.com/problems/sum-of-left-leaves/description/
//level->easy
//topic->binary trees

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
//     int sumOfLeftLeaves(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int sum=0;
//         if(root->left!=NULL){//to check if left child exists kyuki aage root->left->left wagehra check kiya hai toh agar root->left hi nhi hoga toh error aa jaayega
//             if(root->left->left==NULL && root->left->right==NULL){
//                 sum+=root->left->val;
//             }
//         }
//         sum+=sumOfLeftLeaves(root->left);
//         sum+=sumOfLeftLeaves(root->right);
//         return sum;
//     }
// };