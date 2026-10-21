#include<iostream>
int main(){
    int n;
    std::cin >> n;
    for(int c=0; c<n; c++){
        int c2=0;
        for(int c2=0; c2<n; c2++){
            std::cout << (c2+1)*(c+1) << "\t";
        }
        std::cout << std::endl;
    }
}