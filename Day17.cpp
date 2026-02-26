//Day 17->Split a string in balanced string
//largest odd number in string
//smallest string with a given Numeric value

//problem link->https://leetcode.com/problems/split-a-string-in-balanced-strings/description/
//level->Easy
//topic->Greedy Algorithm
// class Solution {
// public:
//     int balancedStringSplit(string s) {
//         int count=0;
//         int balance=0;
//         for(char ch:s){
//             if(ch=='R'){
//                 balance++;
//             }else{
//                 balance--;
//             }
//             if(balance==0){
//                 count++;
//             }
//         }
//         return count;
//     }
// };




//problem link->https://leetcode.com/problems/largest-odd-number-in-string/description/
//topic->Greedy algorithm
//level->Easy
// class Solution {
// public:
//     string largestOddNumber(string num) {
//         int n=0;
//         int maxVal=INT_MIN;
//         string ans="";
//         string temp="";
//         for(char ch:num){
//             temp+=ch;
//             if((ch-'0')%2!=0){
//                 n=temp.size();
//                 if(n>=maxVal){
//                     ans=temp;
//                 }
//             }
//         }
//         return ans;
//     }
// };



//problem link->https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/description/
//level->medium
//topic->Greedy Algorithm
// class Solution {
// public:
//     string getSmallestString(int n, int k) {
//        string temp(n,'a');
//         int remaining=k-n;
//         int i=n-1;
//         while(i>=0 && remaining>0){
//             if(remaining<=('z'-'a')){
//                 temp[i]+=remaining;
//                 remaining=0;
//             }else{
//                 temp[i]='z';
//                 remaining-=25;
//                 i--;
//             }
//         }
//         return temp;
//     }
// };

