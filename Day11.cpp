//Day 11->Decode String
//Topic-> stack
//level->medium
//problem link->https://leetcode.com/problems/decode-string/description/

//approach-> use 2 stacks . One to track number and other to track characters.
//TC->O(n)

// class Solution {
// public:
//     string decodeString(string str) {
//         stack<int>num;
//         stack<string>s;
//         int n=0;
//         string ans="";
//         for(char ch:str){
//             if(isdigit(ch)){
//                 n=n*10+(ch-'0');
//             }
//             else if(ch=='['){
//                 num.push(n);
//                 n=0;
//                 s.push(ans);
//                 ans="";
//             }else if(ch==']'){
//                 int counter=num.top();
//                 num.pop();
//                 string temp=s.top();
//                 string expanded="";
//                 for(int i=0;i<counter;i++){
//                     expanded+=ans;
//                 }
//                 ans=temp+expanded;
//             }else{
//                 ans+=ch;
//             }
//         }
//     }
// }; 