//Day-61->Unique Number of Occurrences
//Intersection of Two Arrays


//Problem link->https://leetcode.com/problems/unique-number-of-occurrences/description/
//Level->Easy
//Topic->unordered map
// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>mp;
//         for(int i=0;i<arr.size();i++){
//             if(mp.count(arr[i])){
//                 mp[arr[i]]++;
//             }else{
//                 mp[arr[i]]=1;
//             }
//         }
//         unordered_set<int>s;
//         for(pair<int,int>p:mp){
//             if(s.count(p.second)){
//                 return false;
//             }
//             s.insert(p.second);
//         }
//         return true;
//     }  
// };




//Problem link->https://leetcode.com/problems/intersection-of-two-arrays/description/
//Level->Easy
//topic->unordered set
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int>s;
//         vector<int>ans;
//         for(int el:nums1){
//             s.insert(el);
//         }
//         for(int el:nums2){
//             if(s.find(el)!=s.end()){
//                 ans.push_back(el);
//             }
//             s.erase(el);
//         }
//         return ans;
//     }
// };