//Day-53-> K Closest Points to Origin
// The K Weakest Rows in a Matrix


//Problem link->https://leetcode.com/problems/k-closest-points-to-origin/description/
//Topic->Priority queue
//Level->Medium
//Approach->min heap
// class Solution {
// public:
//     class Car{
//     public:
//         int idx;
//         int distSq;
//         Car(int idx,int distSq){
//             this->idx=idx;
//             this->distSq=distSq;
//         }
//         bool operator<(const Car &obj)const{
//             return this->distSq>obj.distSq;
//         }
//     };
//     void nearbuyCars(vector<vector<int>>&points,int k,vector<int>&index){
//         vector<Car>cars;
//         for(int i=0;i<points.size();i++){
//             int distSq=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
//             cars.push_back(Car(i,distSq));
//         }
//         priority_queue<Car>pq(cars.begin(),cars.end());
//         for(int i=0;i<k;i++){
//             index.push_back(pq.top().idx);
//             pq.pop();
//         }
//     }
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         vector<vector<int>>ans;
//         vector<int>index;
//         nearbuyCars(points,k,index);
//         //ab index mein saare index filled hai
//         for(int i=0;i<index.size();i++){
//             int id=index[i];
//             ans.push_back(points[id]);
//         }
//         return ans;
//     }
// };





//Problem link->https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/
//level->Easy
//Topic->Priority queue
// class Solution {
// public:
//     class Row{
//     public:
//         int count;
//         int idx;
//         Row(int count,int idx){
//             this->count=count;
//             this->idx=idx;
//         }
//         bool operator<(const Row &obj)const{
//             if(this->count==obj.count){
//                 return this->idx>obj.idx;
//             }
//             return this->count>obj.count;
//         }
//     };
//     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//         int n=mat.size();
//         vector<Row>rows;
//         vector<int>ans;
//         for(int i=0;i<n;i++){
//             int count=0;
//             for(int j=0;j<mat[i].size();j++){
//                 if(mat[i][j]==1){
//                     count++;
//                 }
//             }
//             rows.push_back(Row(count,i));
//         }
//         priority_queue<Row>pq(rows.begin(),rows.end());
//         for(int i=0;i<k;i++){
//             ans.push_back(pq.top().idx);
//             pq.pop();
//         }
//         return ans;
//     }
// };