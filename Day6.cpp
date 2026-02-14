//Day 6 -> LinkedList cycle detection I & II 
// Sort List using merge sort
//ReorderList (ZigZag LinkedList)

//problem link-> https://leetcode.com/problems/linked-list-cycle/description/
//level-> medium
//approach -> Floyd's cycle finding algo. Slow and fast pointers

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 return true;
//                 break;
//             }
//         }
//         return false;
//     }
// };



//problem link-> https://leetcode.com/problems/linked-list-cycle-ii/description/
//level-> medium
//approach -> detecting cycle + some concepts of removing cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         bool isCycle=0;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 isCycle=1;
//                 break;
//             }
//         }
//         if(isCycle){
//             slow=head;
//             if(slow==fast){
//                 return head;
//             }else{
//                 while(slow!=fast){
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
//                 return slow;
//             }
//         }else{
//             return NULL;
//         }
//     }
// };


//problem link->https://leetcode.com/problems/sort-list/description/
//level->medium
//approach-> merge sort + new concept of dummy Node

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
// class Solution {
// public:
//     ListNode* splitAtMid(ListNode* head){
//         ListNode* slow=head;
//         ListNode* fast=head;
//         ListNode* prev=NULL;
//         while(fast!=NULL && fast->next!=NULL){
//             prev=slow;
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         if(prev!=NULL){
//             prev->next=NULL;
//         }
//         return slow;
//     }
//     ListNode* merge(ListNode* left,ListNode* right){
//         ListNode* dummy=new ListNode(-1);
//         ListNode* ans=dummy;
//         ListNode* i=left;
//         ListNode* j=right;
//         while(i!=NULL && j!=NULL){
//             if(i->val<j->val){
//                 ans->next=i;
//                 i=i->next;
//             }else{
//                 ans->next=j;
//                 j=j->next;
//             }
//             ans=ans->next;
//         }
//         while(i!=NULL){
//             ans->next=i;
//             i=i->next;
//             ans=ans->next;
//         }
//         while(j!=NULL){
//             ans->next=j;
//             j=j->next;
//             ans=ans->next;
//         }
//         return dummy->next;
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode* rightHead=splitAtMid(head);
//         ListNode* left=sortList(head);
//         ListNode* right=sortList(rightHead);
//         return merge(left,right);
//     }
// };

//problem link->https://leetcode.com/problems/reorder-list/
//level-> medium
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
// class Solution {
// //approach-> divide in mid and reverse the second half and then alternate merging
// public:
//     ListNode* splitAtMid(ListNode* head){
//         ListNode* slow=head;
//         ListNode* fast=head;
//         ListNode* prev=NULL;
//         while(fast!=NULL && fast->next!=NULL){
//             prev=slow;
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         if(prev!=NULL){
//             prev->next=NULL;
//         }
//         return slow;
//     }
//     ListNode* reverseLL(ListNode* head){
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         ListNode* nextNode=NULL;
//         while(curr!=NULL){
//             nextNode=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextNode;
//         }
//         return prev;
//     }
//     void reorderList(ListNode* head) {
//         ListNode* rightHead=splitAtMid(head);
//         ListNode*rightRevHead=reverseLL(rightHead);
//         //alternate merging
//         ListNode* left=head;
//         ListNode* right=rightRevHead;
//         ListNode* tail=right;
//         while(left!=NULL && right!=NULL){
//             ListNode* nextLeft=left->next;
//             ListNode* nextRight=right->next;
//             left->next=right;
//             right->next=nextLeft;
//             tail=right;
//             left=nextLeft;
//             right=nextRight;
//         }
//         if(right!=NULL){
//             tail->next=right;
//         }
//     }
// };