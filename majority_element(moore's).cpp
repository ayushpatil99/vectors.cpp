// Brute Force

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int sz = nums.size();
        int n= sz/2;
        int count =0;

        for(int val : nums){
            count = 0;
            for(int el : nums){
                if(el==val){
                    count++;
                }
            }
            if(count>n){
                return val;
            }
        }
        return 0;
        
    }
};


//optimised : for sorted array

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int sz = nums.size();
        int n= sz/2;
        int count =1;
        int ans = nums[0];

        for(int i=1; i<sz; i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count = 1;
                ans = nums[i];
            }
            if(count > n){
                return ans;
            }
        }
        return -1;
        
    }
};


// Moore's Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int sz = nums.size();
        
        int count = 0;
        int ans = 0;


        

        
        

        for(int i=0; i<sz; i++){
            
            if(count==0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                count++;

            }
            else{
                count--;
            }
        }
        
        return ans;
        
    }
};