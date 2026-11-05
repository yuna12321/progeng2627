#include <iostream>
double maximum (double n1, double n2, double n3){
    if (n1>n2&&n1>n3){
        return n1;
    }
    else if (n2>n1&&n2>n3){
        return n2;
    }
    else{
        return n3;
    }
}
int main(){
    double n1,n2, n3;
    std::cin >> n1>>n2>>n3;
    std::cout << "maximum is"<< maximum(n1,n2,n3) << std::endl;

}