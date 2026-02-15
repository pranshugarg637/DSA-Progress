//Day 7 ->Intersection of two linkedlist
//swapping nodes 
//odd even linkedList

//problem link->https://leetcode.com/problems/intersection-of-two-linked-lists/description/
//level->easy
//approach -> pehle size check kro konsa bada chotta and then traverse
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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int sizeA=0;
//         int sizeB=0;
//         ListNode* temp=headA;
//         while(temp!=NULL){
//             sizeA++;
//             temp=temp->next;
//         }
//         temp=headB;
//         while(temp!=NULL){
//             sizeB++;
//             temp=temp->next;
//         }
//         if(sizeA>=sizeB){
//             int diff=sizeA-sizeB;
//             ListNode* tempA=headA;
//             ListNode* tempB=headB;
//             for(int i=0;i<diff;i++){
//                 tempA=tempA->next;
//             }
//             while(tempA!=NULL && tempB!=NULL){
//                 if(tempA==tempB){
//                     return tempA;
//                 }
//                 tempA=tempA->next;
//                 tempB=tempB->next;
//             }
//         }else{
//             int diff=sizeB-sizeA;
//             ListNode* tempA=headA;
//             ListNode* tempB=headB;
//             for(int i=0;i<diff;i++){
//                 tempB=tempB->next;
//             }
//             while(tempA!=NULL && tempB!=NULL){
//                 if(tempA==tempB){
//                     return tempA;
//                 }
//                 tempA=tempA->next;
//                 tempB=tempB->next;
//             }
//         }
//         return NULL;
//     }
// };


//problem link->https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
//level->medium
//approach-> only swapping the values not the complete node
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
//     ListNode* swapNodes(ListNode* head, int k) {
//         int c=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         //size of linekdlist = c
//         ListNode* tempA=head;
//         ListNode* tempB=head;
//         for(int i=0;i<k-1;i++){
//             tempA=tempA->next;
//         }
//         for(int j=0;j<c-k;j++){
//             tempB=tempB->next;
//         }
//         int tempo=tempA->val;
//         tempA->val=tempB->val;
//         tempB->val=tempo;
//         return head;
//     }
// };


//problem Link->https://leetcode.com/problems/odd-even-linked-list/description/
//level->medium
//approach-> head and tail and then even waale ko tail ke end mein push
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
//     ListNode* oddEvenList(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return head;
//         }
//         ListNode* temp=head;
//         ListNode* tail=head;
//         int c=0;
//         while(temp->next!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         int sizeL=c+1;
//         tail=temp;
//         temp=head;
//         ListNode* prev=NULL;
//         for(int i=1;i<=sizeL;i++){
//             if(i%2!=0){
//                 prev=temp;
//                 temp=temp->next;
//             }else{
//                 if(temp->next!=NULL){
//                     prev->next=temp->next;
//                     temp->next=NULL;
//                     tail->next=temp;
//                     tail=tail->next;
//                     temp=prev->next;
//                 }else{
//                     return head;
//                 }
//             }
//         }
//         return head;
//     }
// };