//Maximum Subarray

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int sz= sizeof(arr)/sizeof(int);
    int currSum = 0;
    int maxSum = 0;

    for(int k=0; k<sz; k++){
        currSum=0;
    
    for(int i=k; i< sz; i++){

        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        
       
    }

    }
    cout<<"maximum = "<<maxSum;
    


    return 0;

}