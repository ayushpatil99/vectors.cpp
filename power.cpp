class Solution {
public:
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
};