#include <iostream>
#include <string>
int main(){
    int  low, high;
    std::cin >> low >> high;
    while(low <= high){
        double guess = low + (high - low) / 2;
        std::cout << "is it " << guess << "?" << std::endl;
        std::string feedback;
        std::cin >> feedback;
        if (feedback == "yes"){
            std::cout << guess << std::endl;
            break;
        }
           else if (feedback == "lower"){
            low=guess;
        }
            else if (feedback == "higher"){
                high=guess;
            }

           }
    
}