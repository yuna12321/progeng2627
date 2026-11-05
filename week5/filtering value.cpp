#include <iostream>
#include <vector>
int main(){
    int n;
    std::vector<int>v;
    std::cin>>n;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cout<<v.at(i)<<std::endl;
    }
    

}