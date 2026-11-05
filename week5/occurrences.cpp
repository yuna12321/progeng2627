#include <iostream>
#include <vector>
int main(){
    int n,a,s,count=0;
    std::vector<int>v;
    std::vector<int>v2;
    std::cout<<"enter n"<<std::endl;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cout<<"enter a number"<<std::endl;
        std::cin>>a;
        v.push_back(a);
    }
    std::cout<<"enter s"<<std::endl;
    std::cin>>s;
    for(int i=0;i<n;i++){
        if(v.at(i)==s){
            count++;
            v2.push_back(i);
        }
    }
    std::cout<<count<<" occurence of "<< s<<"at"<<v2.at(0)<<"and"<<v2.at(1)<<std::endl;
}