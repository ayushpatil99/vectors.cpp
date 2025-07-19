// leetcode 852

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {


        int sz = arr.size();

        int start = 0;
        int end = sz - 1;
        int peak;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }

            if(arr[mid]<arr[mid - 1]){
                end = mid - 1;
            }

            if(arr[mid]<arr[mid+1]){
                start = mid + 1;
            }

          }
          return -1;
        
    }
};