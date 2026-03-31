//Day-51 ->Validate Binary Search Tree
// Convert Sorted List to Binary Search Tree
// Maximum Sum BST in Binary Tree



//Problem link->https://leetcode.com/problems/validate-binary-search-tree/description/
//Topic->BST
//Approach->Normal left right traversal
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
//     bool isValidBST(TreeNode* root) {
//         if(root->left==NULL && root->right==NULL){
//             return true;
//         }
//         bool leftCheck=true;
//         bool rightCheck=true;
//         if(root->left){
//             if(root->val>root->left->val){
//                 leftCheck=isValidBST(root->left);
//             }else{
//                 return false;
//             }
//         }
//         if(root->right){
//             if(root->val<root->right->val){
//                 rightCheck=isValidBST(root->right);
//             }else{
//                 return false;
//             }
//         }
//         return (leftCheck && rightCheck);
//     }
// };

//iss question mein yeh approach nahi chali kyuki root ke left and right mein saari values ya toh badi ya chotti hongi.Hume max and min define krna padega


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
//     bool checkBST(TreeNode* root,long long min,long long max){
//         if(root==NULL){
//             return true;
//         }
//         bool leftCheck=true;
//         bool rightCheck=true;
//         if(root->val>min && root->val<max){
//             leftCheck=checkBST(root->left,min,root->val);
//             rightCheck=checkBST(root->right,root->val,max);
//         }else{
//             return false;
//         }
//         return (leftCheck && rightCheck);
//     }
//     bool isValidBST(TreeNode* root) {
//         long long max=LLONG_MAX;
//         long long min=LLONG_MIN;
//         return checkBST(root,min,max);
//     }
// };





//Problem link->https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/
//Topic->BST
//Approach->already sorted hai toh no need to check for left right values greater less values. bus kyuki height balanced bola hai toh check for min as we do in binary search
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
//     TreeNode* convert(int st,int end,vector<int>&listt){
//         if(st>end){
//             return NULL;
//         }
//         int mid=st+(end-st)/2;
//         TreeNode* root=new TreeNode(listt[mid]);
//         root->left=convert(st,mid-1,listt);
//         root->right=convert(mid+1,end,listt);
//         return root;
//     }
//     TreeNode* sortedListToBST(ListNode* head) {
//         vector<int>listt;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             listt.push_back(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         TreeNode* root=convert(0,listt.size()-1,listt);
//         return root;
//     }
// };






//Problem link->https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/
//Topic->BST
//level->hard
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
//Approach-> har node ke liye check 4 values wheter it is a valid bst , max , min and sum of childreng
// class Solution {
// public:
//     class Info{
//     public:
//         bool isBST;
//         int min;
//         int max;
//         int sum;
//         Info(bool isBST,int min,int max,int sum){
//             this->isBST=isBST;
//             this->min=min;
//             this->max=max;
//             this->sum=sum;
//         }
//     };
//     int maxSum=0;
//     Info* largestBST(TreeNode* root){
//         if(root==NULL){
//             return new Info(true,INT_MAX,INT_MIN,0);
//         }
//         Info* leftInfo=largestBST(root->left);
//         Info* rightInfo=largestBST(root->right);
//         int currMin=min(root->val,min(leftInfo->min,rightInfo->min));
//         int currMax=max(root->val,max(leftInfo->max,rightInfo->max));
//         int currSum=leftInfo->sum+rightInfo->sum+root->val;
//         if(leftInfo->isBST && rightInfo->isBST && root->val>leftInfo->max && root->val<rightInfo->min){
//             maxSum=max(maxSum,currSum);
//             return new Info(true,currMin,currMax,currSum);
//         }
//         return new Info(false,currMin,currMax,currSum);
//     }
//     int maxSumBST(TreeNode* root) {
//         Info* inf=largestBST(root);
//         return maxSum;
//     }
// };