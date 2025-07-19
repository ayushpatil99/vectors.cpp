//Maximum Subarray using Kadane's Algorithm

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};

    int currSum=0;
    int maxSum=0;
    int sz= sizeof(arr)/sizeof(int);

    for(int i = 0; i< sz; i++){
        currSum+= arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"maximum sum = "<<maxSum;
    return 0;
}