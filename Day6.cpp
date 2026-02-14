//Day 6 -> LinkedList cycle detection I & II 
// Sort List using merge sort

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