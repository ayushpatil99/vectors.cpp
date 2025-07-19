#include<iostream>
#include<vector>
using namespace std;

//Single Number: return the number in the array which is not repeated

//Explanation: n^n = 0 and n^0 = n 
// so by using ^ we cancel out repeating numbers



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans^= val;
        }
        return ans;




        
    }
};