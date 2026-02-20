//Day 12-> Simplify Path
//Topic-> stack
//level-> medium
//problem link->https://leetcode.com/problems/simplify-path/description/

//approach-> / pe check kro push hoga ya nhi aur agar .. aaya toh pop and . aaya toh push nhi hoga

// class Solution {
// public:
//     string simplifyPath(string path) {
//         stack<string>ans;
//         string temp="";
//         for(char ch:path){
//             if(ch=='/'){
//                 if(temp==".."){
//                     if(!ans.empty()){
//                         ans.pop();
//                     }
//                 }else if(temp!="" && temp!="."){
//                     ans.push(temp);
//                 }
//                 temp="";
//             }
//             else{
//                 temp+=ch;
//             }
//         }
//         // agar last mein / nahi hai toh temp wala khaali bach jaayega
//         if(temp==".."){
//             if(!ans.empty()){
//                 ans.pop();
//             }
//         }else if(temp!="" && temp!="."){
//             ans.push(temp);
//         }
//         if(ans.empty()){
//             return "/";
//         }
//         string result="";
//         while(!ans.empty()){
//             result="/"+ans.top()+result;
//             ans.pop();
//         }
//         return result;
//     }   
// };