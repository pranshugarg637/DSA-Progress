//Day 3-> Letter combinations of a phone number
//Problem Link->https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
//difficulty ->Medium
//topic-> Backtracking

// class Solution {
// public:
//     void keypad(string digits,string temp,vector<string>&mapping,int index,vector<string>&ans){
//         if(index==digits.size()){
//             ans.push_back(temp);
//             return;
//         }
//         string str=mapping[digits[index]-'0'];
//         for(int i=0;i<str.size();i++){
//             char ch=str[i];
//             keypad(digits,temp+ch,mapping,index+1,ans);
//         }
//     }
//     vector<string> letterCombinations(string digits) {
//         vector<string>mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         vector<string>ans;
//         keypad(digits,"",mapping,0,ans);
//         return ans;
//     }
// };
