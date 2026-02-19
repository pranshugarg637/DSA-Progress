//Day 10->Palindrome linkedList
//topic-> stack
//Level-> easy
//problem link-> https://leetcode.com/problems/palindrome-linked-list/description/
//TC-> O(n)

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
//     bool isPalindrome(ListNode* head) {
//         stack<int>s;
//         int c=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         temp=head;
//         if(c%2!=0){
//             int mid=c/2;
//             for(int i=0;i<mid;i++){
//                 s.push(temp->val);
//                 temp=temp->next;
//             }
//             temp=temp->next;
//             for(int i=0;i<mid;i++){
//                 if(temp->val!=s.top()){
//                     return false;
//                 }else{
//                     s.pop();
//                     temp=temp->next;
//                 }
//             }
//         }else{
//             int mid=c/2;
//             for(int i=0;i<mid;i++){
//                 s.push(temp->val);
//                 temp=temp->next;
//             }
//             for(int i=0;i<mid;i++){
//                 if(temp->val!=s.top()){
//                     return false;
//                 }else{
//                     s.pop();
//                     temp=temp->next;
//                 }
//             }
//         }
//         return true;
//     }
// };