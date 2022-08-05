class Solution {
public:
      double pow_util(double x,long n){
        if(n==0)return 1.0;
        if(x==0||x==1)return x;
        if(n==1)return x;
        
        if(n<0)return pow_util(1/x,-n);
        
        double t=myPow(x,n/2);
        if(n%2==1){
           return x*t*t;
        }else{
            return t*t;
        }
      return 0.0;
    }
    double myPow(double x, int n) {
        return pow_util(x,n);
    }
};
   



