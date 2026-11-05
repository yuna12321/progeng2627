# include <iostream>
void division (int a, int b, int& div, int& rem){
    div = a/b;
    rem=a%b;
}
int main(){
    int a,b,d,r;
    std::cin>>a>>b;
    division(a,b,d,r);
    std::cout<<d<<std::endl;
    std::cout<<r<<std::endl;

}