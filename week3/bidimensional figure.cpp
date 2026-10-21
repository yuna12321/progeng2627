#include <iostream>

int main(){
    int n, c=0, c2=0;
    std::cin >> n;
while(c<n){
    c2=0;
    while(c2<n){
    std::cout << "*";
    c2++;}
    c++;
    std::cout << std::endl;
}
}