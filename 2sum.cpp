//Brute force

#include<iostream>
#include<vector>
using namespace std;



    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;

        int sz = nums.size();
       for(int i=0; i<sz; i++){
        for(int j=i+1; j<sz; j++){
            int ps = nums.at(i) + nums.at(j);
            if(ps == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
       }

        
        return ans;
    }
        
        
    
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int target = 6;

    vector<int> ans = twoSum(nums,target);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]";
    return 0;
}

/*
optimized for sorted array
#include<iostream>
#include<vector>
using namespace std;



    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        sort(nums.begin(),nums.end());

        int sz = nums.size();
       int i=0;
       int j= sz-1;
       while(i<j){
       int ps = nums.at(i) + nums.at(j);
       if(ps>target){
       j--;
       }
       else if(ps<target){
       i++;
       }
       else{
       ans.push_back(i);
       ans.push_back(j);
       return ans;
       }
       
         }
        
        return ans;
    }
        
        
    
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int target = 6;

    vector<int> ans = twoSum(nums,target);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]";
    return 0;
}
    */




