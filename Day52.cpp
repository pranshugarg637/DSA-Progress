//Day-52 ->Kth Largest Element in an Array
//Problem link->https://leetcode.com/problems/kth-largest-element-in-an-array/description/
//Topic-> Heaps
//Approach-> simple pop and heapify logic

// class Solution {
// public:
//     class Heap{
//     public:
//         vector<int>vec;
//         void push(int val){
//             vec.push_back(val);
//             int x=vec.size()-1;
//             int par=(x-1)/2;
//             while(par>=0 && vec[par]<vec[x]){
//                 swap(vec[par],vec[x]);
//                 x=par;
//                 par=(x-1)/2;
//             }
//         }
//         void heapify(int i){
//             if(i>vec.size()){
//                 return;
//             }
//             int l=(2*i)+1;
//             int r=(2*i)+2;
//             int max=i;
//             if(l<vec.size() && vec[l]>vec[max]){
//                 max=l;
//             }
//             if(r<vec.size() && vec[r]>vec[max]){
//                 max=r;
//             }
//             swap(vec[max],vec[i]);
//             if(max!=i){
//                 heapify(max);
//             }
//         }
//         void pop(){
//             swap(vec[0],vec[vec.size()-1]);
//             vec.pop_back();
//             heapify(0);
//         }
//     };
//     int findKthLargest(vector<int>& nums, int k) {
//         Heap h;
//         for(int num:nums){
//             h.push(num);
//         }
//         for(int j=0;j<k-1;j++){
//             h.pop();
//         }
//         return h.vec[0];
//     }
// };