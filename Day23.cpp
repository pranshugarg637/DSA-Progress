//Day-23-> Lowest Common Ancestor of a Binary Tree
//Problem link->Lowest Common Ancestor of a Binary Tree
//Topic-> Binary tree
//level->Medium

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool calcPath(TreeNode* root,TreeNode* n,vector<int>&path){
//         if(root==NULL){
//             return false;
//         }
//         path.push_back(root->val);
//         if(root->val==n->val){
//             return true;
//         }
//         if(calcPath(root->left,n,path) ||
//         calcPath(root->right,n,path)){
//             return true;
//         }
//         path.pop_back();
//         return false;
//     }
//     TreeNode* findNode(TreeNode* root,int lca){
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->val==lca){
//             return root;
//         }
//         TreeNode* leftRes=findNode(root->left,lca);
//         if(leftRes!=NULL){
//             return leftRes;
//         }
//         return findNode(root->right,lca);
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<int>path1;
//         vector<int>path2;
//         calcPath(root,p,path1);
//         calcPath(root,q,path2);
//         int lca=-1;
//         for(int i=0,j=0;i<path1.size() && j<path2.size();i++,j++){
//             if(path1[i]==path2[j]){
//                 lca=path1[i];
//             }
//         }
//         TreeNode* ans=findNode(root,lca);
//         if(ans!=NULL){
//             return ans;
//         }else{
//             return NULL;
//         }
//     }
// };
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->val==p->val || root->val==q->val){
//             return root;
//         }
//         TreeNode* leftlca=lowestCommonAncestor(root->left,p,q);
//         TreeNode* rightlca=lowestCommonAncestor(root->right,p,q);
//         if(leftlca!=NULL && rightlca!=NULL){
//             return root;
//         }
//         return leftlca==NULL?rightlca:leftlca;
//     }
// };