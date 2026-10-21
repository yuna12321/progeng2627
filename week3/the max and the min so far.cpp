#include <iostream>

int main(){
    int n, curmin;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmin = n;
    

    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        
        if(n < curmin){
            curmin = n;
            
        }

        std::cout << "minimum so far: " << curmin << std::endl;
        
    }

}