#include <iostream>
#include <vector>
int main(){
    int n1,n2,n3;
    std::cin>>n1>>n2>>n3;
    std::vector<int>v;
    
    v.push_back(n1);
    v.push_back(n2);
    v.push_back(n3);
    std::cout<<v[0]*(v[1]+v[2])<<std::endl;
}