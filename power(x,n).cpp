//Brute force
#include<iostream>
using namespace std;


    double myPow(double x, int n) {
        if(n<0){
            n= -n;
            x = 1/x;
        }

        
        
         if(n==0){
            return 1.0;
        }
        else if (n==1){
            return x;
        }
        
        else{
            double prod = x;
        for(int i=1; i<n; i++){
            prod *= x ;
        }
        return prod;
    }

    }


int main(){
    cout<<myPow(2.0,10);
}


//optimised for TLE (time limit exceeded)

class Solution {
public:
    double myPow(double x, int n) {

        long int binform = n;
        double ans = 1;
        
        if(n<0){
            x = 1/x;
            binform = -binform;
        }
        if(n==0) return 1.0;
        if(n==1) return x;
        if(x==1) return 1.0;
        if(x==-1 && n%2==0) return 1;
        if(x==-1 && n%2!=0) return -1;


        while(binform>=1){
            if(binform%2==1){
                ans = ans * x;
            }
            x *= x;
            binform /= 2;
        }
        return ans;
    }
};