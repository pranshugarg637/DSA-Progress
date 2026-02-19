//Day 8 -> Reverse String 
//Online stock span
//Next Greater element 1
//valid parenthesis


//problem link->https://leetcode.com/problems/reverse-string/description/
//level->easy
//solved using stack
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         stack<char>st;
//         for(char ch:s){
//             st.push(ch);
//         }
//         int n=s.size();
//         for(int i=0;i<n;i++){
//             s[i]=st.top();
//             st.pop();
//         }
//     }
// };




//problem link->https://leetcode.com/problems/online-stock-span/description/
//level->medium
//approach-> har index pe jaake check kar with top value of stack
// class StockSpanner {
// public:
//     vector<int>stocks;
//     stack<int>s;
//     StockSpanner() {
//     }
    
//     int next(int price) {
//         stocks.push_back(price);
//         int i=stocks.size()-1;
//         while(!s.empty() && stocks[i]>=stocks[s.top()]){
//             s.pop();
//         }
//         int span;
//         if(s.empty()){
//             span=i+1;
//         }else{
//             span=i-s.top();
//         }
//         s.push(i);
//         return span;
//     }
// };




//problem link-> https://leetcode.com/problems/next-greater-element-i/description/
//level->easy
//approach-> same as used above( classical stack top check)
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums2.size();
//         vector<int>ans(n,0);
//         vector<int>finalAns(nums1.size(),0);
//         stack<int>s;
//         s.push(n-1);
//         ans[n-1]=-1;
//         for(int i=n-2;i>=0;i--){
//             while(!s.empty() && nums2[i]>=nums2[s.top()]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 ans[i]=-1;
//             }else{
//                 ans[i]=nums2[s.top()];
//             }
//             s.push(i);
//         }
//         for(int i=0;i<nums1.size();i++){
//             int curr=nums1[i];
//             for(int j=0;j<nums2.size();j++){
//                 if(nums2[j]==curr){
//                     finalAns[i]=ans[j];
//                 }
//             }
//         }
//         return finalAns;
//     }
// };





//problem link->https://leetcode.com/problems/valid-parentheses/description/
//level->easy
//approach-> opening ko push in stack and closing pe check top
// class Solution {
// public:
//     bool isValid(string s) {
//         int n=s.size();
//         stack<char>st;
//         for(int i=0;i<n;i++){
//             if(s[i]=='{' || s[i]=='[' || s[i]=='('){
//                 st.push(s[i]);
//             }else{
//                 if(st.empty()){
//                     return false;
//                 }
//                 if((s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[') || (s[i]==')' && st.top()=='(')){
//                     st.pop();
//                 }else{
//                     return false;
//                 }
//             }
            
//         }
//         return st.empty();
//     }
// };
