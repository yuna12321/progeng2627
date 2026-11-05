#include <iostream>
#include <cmath>

int main(){
    double x,n, sum=0;
    std::cin >> x >> n;
    for(int i=1;i<=n;i++){
        sum = sum + std::pow(x,i);
    }
    std::cout << sum << std::endl;
}

