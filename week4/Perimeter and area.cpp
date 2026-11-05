#include <iostream>
#include <cmath>
void rectangle (double n1, double n2,double& p, double& a ){
    p=2*(n1 + n2);
    a=n1 * n2;
}

int main(){
    double n1, n2, p, a;
    std::cin >> n1>>n2;
    rectangle(n1, n2, p, a);
    std::cout << p <<std::endl;
    std::cout << a << std::endl;
}