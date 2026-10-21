#include <iostream>

int main() {
    int n,acc=1;
    std::cin >> n;
    for(int i=0; i< n;i++){
        acc = acc * (i+1);
    }
    std::cout << acc << std::endl;
}
