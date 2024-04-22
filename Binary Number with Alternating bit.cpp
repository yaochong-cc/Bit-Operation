//
// Created by Lenovo on 2024/4/22.
//
#include <iostream>
using namespace std;

//class Solution {
//public:
//    bool hasAlternatingBits(int n){
//        while(n){
//            if((n&3)==3||(n&3)==0)
//                return false;
//            n>>=1;
//        }
//        return true;
//
//    }
//};

//class Solution {
//public:
//    bool hasAlternatingBits(int n) {
//        int cur = n & 1;
//        while(n){
//            if(n&1!=cur) return false;
//            n>>=1;
//            cur=1-cur;
//        }
//        return true;
//    }
//};


//class Solution {
//public:
//    bool hasAlternatingBits(int n) {
//        int cur=0x55555555;
//        while(cur){
//            if(n==cur) return true;
//            cur=cur>>1;
//        }
//        return false;
//    }
//
//};

class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long cur=n^(n>>1);
        cur++;
        return (cur&(cur-1))==0;
    }

};

int main() {
    Solution s;

    int n = 5;
    bool res = s.hasAlternatingBits(n);
    cout<<res<<endl;

    return 0;
}