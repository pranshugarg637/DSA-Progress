//Day-57->Task Scheduler

//Problem link->https://leetcode.com/problems/task-scheduler/description/
//Level->Medium
//Topic->Priority queue

// class Solution {
// public:
//     int leastInterval(vector<char>& tasks, int n) {
//         //kyuki minimum no. of steps batane hai toh priority queue bana do(min heap) on basis of occurence of alphabets
//         int freq[26]={0};
//         for(int i=0;i<tasks.size();i++){
//             freq[tasks[i]-'A']++;
//         }
//         priority_queue<pair<int,char>>pq;
//         for(int i=0;i<26;i++){
//             if(freq[i]>0){
//                 pq.push(make_pair(freq[i],char(i+'A')));
//             }
//         }
//         int time=0;
//         while(!pq.empty()){
//             vector<pair<int,char>>vec;
//             int cycle=n+1;
//             while(cycle>0 && !pq.empty()){
//                 pair<int,char>temp=pq.top();
//                 pq.pop();
//                 temp.first--;
//                 time++;
//                 vec.push_back(temp);
//                 cycle--;
//             }
//             for(int h=0;h<vec.size();h++){
//                 if(vec[h].first>0){
//                     pq.push(make_pair(vec[h].first,vec[h].second));
//                 }
//             }
//             vec.clear();
//             if(!pq.empty()){
//                 time+=cycle;
//             }
//         }
//         return time;
//     }
// };
