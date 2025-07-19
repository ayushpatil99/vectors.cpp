//leetcode 238

//brute force

#include<iostream>
#include<vector>
using namespace std;



vector<int> product(vector<int>& nums){
    int sz = nums.size();
    int prod=1;
    vector<int> ans;


    for(int i=0; i<sz; i++){
        prod = prod * nums.at(i);
        
    }
    
    int a = prod;


    for(int i=0; i<sz; i++){
        a = prod;
        a = a/nums.at(i);
        ans.push_back(a);
    }

    return ans;
}

int main(){
   vector<int> nums = {1,2,3,4};


   vector<int> ans = product(nums);

   int sz= ans.size();

   for(int i=0; i<sz; i++){
    cout<<ans.at(i)<<" ";
   }

   return 0;


}





//brute force 2:



#include<iostream>
#include<vector>
using namespace std;



vector<int> product(vector<int>& nums) {

        int sz = nums.size();
        vector<int> Ans;
        int skip = 0;
        int prod = 1;
        int a;

        for(int i = 0; i<sz; i++){
            a = prod;
            for(int j = 0; j<sz; j++){
                if(j==skip){
                    continue;
                }
                else{
                    
                    a = a * nums.at(j);
                    
                }
                
            }
            Ans.push_back(a);
                skip++;

        }
        return Ans;

        
    }

    int main(){
        vector<int> nums = {1,2,3,4};


   vector<int> ans = product(nums);

   int sz= ans.size();

   for(int i=0; i<sz; i++){
    cout<<ans.at(i)<<" ";
   }

   return 0;

    }





//optimised : by calculating prefix ans suffix separately

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {


        int sz = nums.size();
        int prod;
        vector<int> ans(sz,1);

        vector<int> pxprod(sz,1);
        vector<int> sxprod(sz,1);
        int n;

        //prefix
        for(int i=1 ; i<sz ; i++){
            pxprod[i] = pxprod[i-1] * nums.at(i-1);
         }


       //suffix
       for(int i=sz-2 ; i>=0 ; i-- ){
            sxprod[i] = sxprod[i+1] * nums.at(i+1);
       }

       //combine

       for(int i=0; i<sz; i++){

        ans[i]= sxprod[i] * pxprod[i];


       }

       return ans;       
    }
};



//optimized for space complexity => O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {


        int sz = nums.size();
        int prod;
        vector<int> ans(sz,1);
        int suffix = 1;

        
        int n;

        //prefix
        for(int i=1 ; i<sz ; i++){
            ans[i] = ans[i-1] * nums.at(i-1);
         }


       //suffix
       for(int i=sz-2 ; i>=0 ; i-- ){
        suffix = suffix * nums[i+1];
        ans[i] = ans[i] * suffix;

            
       }

       /* //no need to combine

       for(int i=0; i<sz; i++){

        ans[i]= sxprod[i] * pxprod[i];


       }
    */

       return ans;       
    }
};



