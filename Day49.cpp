//Day-49 -> Delete Node in a BST
// Range Sum of BST
// Binary Tree Paths
// Sum Root to Leaf Numbers



//Problem Link->https://leetcode.com/problems/delete-node-in-a-bst/description/
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
//     TreeNode* getInorder(TreeNode* root){
//         while(root->left!=NULL){
//             root=root->left;
//         }
//         return root;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->val>key){
//             root->left=deleteNode(root->left,key);
//         }
//         if(root->val<key){
//             root->right=deleteNode(root->right,key);
//         }
//         if(root->val==key){
//             //3 cases
//             //No child
//             if(root->left==NULL && root->right==NULL){
//                 delete root;
//                 return NULL;
//             }
//             //1Child
//             else if(root->left==NULL || root->right==NULL){
//                 TreeNode* temp;
//                 if(root->left){
//                     temp=root->left;
//                 }else{
//                     temp=root->right;
//                 }
//                 delete root;
//                 return temp;
//             }
//             else{//2 child
//                 TreeNode* IS=getInorder(root->right);
//                 root->val=IS->val;
//                 root->right=deleteNode(root->right,IS->val);
//                 return root;
//             }
//         }
//         return root;
//     }
// };




//Problem link->https://leetcode.com/problems/range-sum-of-bst/description/
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
//     void inRange(TreeNode* root,int low,int high,int &sum){
//         if(root==NULL){
//             return;
//         }
//         if(root->val>=low && root->val<=high){
//             sum+=root->val;
//             inRange(root->left,low,high,sum);
//             inRange(root->right,low,high,sum);
//         }else if(root->val<low){
//             inRange(root->right,low,high,sum);
//         }else if(root->val>high){
//             inRange(root->left,low,high,sum);
//         }
//     }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         int sum=0;
//         inRange(root,low,high,sum);
//         return sum;
//     }
// };





//Problem link->https://leetcode.com/problems/binary-tree-paths/description/
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
//     void printPaths(TreeNode* root,vector<string>&ans,string temp){
//         if(root==NULL){
//             return;
//         }
//         if(temp==""){
//             temp+=to_string(root->val);
//         }else{
//             temp+="->"+to_string(root->val);
//         }
//         if(root->left==NULL && root->right==NULL){
//             ans.push_back(temp);
//             return;
//         }
//         printPaths(root->left,ans,temp);
//         printPaths(root->right,ans,temp);
//     }
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string>ans;
//         printPaths(root,ans,"");
//         return ans;
//     }
// };





//Problem link->https://leetcode.com/problems/sum-root-to-leaf-numbers/description/
//Topic->Binary tree
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
//     void printPaths(TreeNode* root,vector<string>&ans,string temp){
//         if(root==NULL){
//             return;
//         }
//         temp+=to_string(root->val);
//         if(root->left==NULL && root->right==NULL){
//             ans.push_back(temp);
//             return;
//         }
//         printPaths(root->left,ans,temp);
//         printPaths(root->right,ans,temp);
//     }
//     int sumNumbers(TreeNode* root) {
//        vector<string>ans;
//        string temp="";
//        printPaths(root,ans,temp);
//        int sum=0;
//        for(int i=0;i<ans.size();i++){
//         sum+=stoi(ans[i]);
//        }
//        return sum;
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
//     void calcSum(TreeNode* root,int &sum,int current){
//         if(root==NULL){
//             return;
//         }
//         current=current*10+root->val;
//         if(root->left == NULL && root->right == NULL) {
//             sum+=current;
//             return;
//         }
//         calcSum(root->left, sum, current);
//         calcSum(root->right, sum, current);
//     }
//     int sumNumbers(TreeNode* root) {
//         int sum=0;
//         calcSum(root,sum,0);
//         return sum;
//     }
// };  
//iss question ke 2 approach hai. Pehle mein hum path ko vector mein convert krke string ein basically and then string to integer.
//Approach 2-> Current digit * 10
