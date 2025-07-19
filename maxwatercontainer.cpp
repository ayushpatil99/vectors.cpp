// brute force
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


    int maxArea(vector<int>& height) {
        int sz = height.size();
        int maxArea=0;
        int area;
        int len;
        int bigger;
        int breadth;
        int smaller;

        for(int i=0; i< sz; i++){
            for(int j=i+1; j<sz; j++){
                len = min(height.at(i),height.at(j));
                
                breadth = j - i;
                area = len * breadth;
                maxArea = max(area,maxArea);
             }
        }
        return maxArea;
        
    }
int main(){
    vector<int> height={1,2,3,4,5,6,7};
    cout<<maxArea(height);
    return 0;
}


/* optimised


class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int sz = height.size();
        int end = sz - 1;
        int maxArea = 0;
        int area;
        int w;
        int l;
        



        while(start<end){
            int w = end - start;
            int l = min(height.at(start),height.at(end));
            int area = w * l;
            maxArea = max (area, maxArea); 
            if(height.at(start)<height.at(end)){
                start++;
            }
            else{
                end--;
            }
        }
        return maxArea;
        
    }
};
*/