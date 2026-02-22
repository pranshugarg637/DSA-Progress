//Day13 -> first unique character in a string
// time needed to buy tickets

//problem link->https://leetcode.com/problems/first-unique-character-in-a-string/description/
//level->easy
//topic->queues

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int c=s.size();
//         queue<int>q;
//         int freq[26]={0};
//         for(int i=0;i<c;i++){
//             freq[s[i]-'a']++;
//         }
//         for(int i=0;i<c;i++){
//             q.push(i);
//             if(freq[s[q.front()]-'a']==1){
//                 return q.front();
//             }else{
//                 q.pop();
//             }
//         }
//         return -1;
//     }
// };



// problem link->https://leetcode.com/problems/time-needed-to-buy-tickets/description/
//topic->queues
//level->easy

// class Solution {
// public:
// // ab bas yeh reh gaya ki kth waale ko track kaise kru
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
//         int temp=k;
//         int n=tickets.size();
//         queue<int>q;
//         for(int i=0;i<tickets.size();i++){
//             q.push(tickets[i]);
//         }
//         int t=0;
//         while(true){
//             int val=q.front();
//             if(k<0){
//                 tickets[temp]--;
//                 if(tickets[temp]==0){
//                     return t;
//                 }
//                 k=n-1;
//             }
//             if(val==1){
//                 q.pop();
//                 t++;
//                 k--;
//                 n--;
//             }
//             else{
//                 q.pop();
//                 q.push(val-1);
//                 t++;
//                 k--;
//             }
//         }
//     }
// };