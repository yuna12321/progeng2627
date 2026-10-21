#include <iostream>

int main(){
    int n, x,acc=1;
    std::cin >> x>>n;
    for(int i=0;i<x;i++){
        acc=acc*n;
    }
    std::cout << acc << std::endl;
}