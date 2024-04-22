////
//// Created by Lenovo on 2024/4/22.
////
//#include <iostream>
//#include <vector>
//using namespace std;
////
////class Solution {
////public:
////    vector<int> countBits(int n) {
////        vector<int> res(n+1);
////        for(int i=0;i<=n;i++){
////            int curNum=i;
////            int bitCnt=0;
////            while(curNum){
////                if(curNum&1) bitCnt++;
////                curNum=curNum>>1;
////            }
////            res[i]=bitCnt;
////        }
////        return res;
////    }
////};
//
//
//
////class Solution {
////public:
////    vector<int> countBits(int n) {
////        vector<int> res(n+1);
////        for(int i=0;i<=n;i++){
////            int curNum=i;
////            int bitCnt=0;
////            while(curNum){
////                bitCnt++;
////               curNum=curNum&(curNum-1);
////            }
////            res[i]=bitCnt;
////        }
////        return res;
////    }
////};
//
//
//class Solution {
//public:
//    vector<int> countBits(int n) {
//        vector<int> res(n+1);
//        for(int i=0;i<n;i++){
//            res[i]=res[i&(i-1)]+1;
//        }
//        return res;
//    }
//};
//
//int main() {
//    Solution solution;
//    int num = 5;
//    vector<int> res = solution.countBits(num);
//    for(int i=0; i<=num; i++){
//        cout<<res[i]<<" ";
//    }
//    return 0;
//}