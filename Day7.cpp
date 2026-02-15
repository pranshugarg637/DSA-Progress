//Day 7 ->Intersection of two linkedlist

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