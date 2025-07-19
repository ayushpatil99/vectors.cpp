#include<iostream>
#include<algorithm>
using namespace std;



int binarysearch(int arr[], int tar , int size){

    int start = 0;
    
    int end = size-1;
    

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] < tar){
            start = start + 1;
            
        }
        else if(arr[mid] > tar){
            end = mid -1;
        }
        else{
            return mid;
        }
        
    }

    return -1;




}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8};
    int target = 5;
    int sz= sizeof(arr)/sizeof(int);
    sort(arr[0] ,  arr[sz-1]);

    int ans = binarysearch(arr,target,sz);

    if(ans != -1){
        cout<<"element found at "<<ans<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }



    return 0;


}