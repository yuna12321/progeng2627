#include <iostream>

double mypow(double base, int exp){
    double result=1; 
    
    for(int i=1;i<(exp+1);i++){
        result=result*base;
    }

    return result;
    
}

int main(){
    double x,n, sum=0;
    std::cin>>x>>n;// we test examples with integer (and non-negative) exponent
    for(int i=1;i<(n+1);i++){
    sum = sum + mypow(x,i);
    }
    std::cout << sum << std::endl;
}