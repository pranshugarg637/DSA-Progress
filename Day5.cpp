//DAY 5-> Remove Nth node from end of list
//problem link=https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
//diifculty->medium
//topic-> linkedlist

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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int c=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         if(c==n){
//             ListNode* tempo=head;
//             tempo=head->next;
//             delete head;
//             return tempo;
//         }
//         int start=c-n;
//         temp=head;
//         for(int j=0;j<start-1;j++){
//             temp=temp->next;
//         }
//         ListNode* nextNode=temp->next;
//         temp->next=nextNode->next;
//         nextNode->next=NULL;
//         delete nextNode;
//         return head;
//     }
// };