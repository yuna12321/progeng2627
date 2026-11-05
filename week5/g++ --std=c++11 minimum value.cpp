#include <iostream>
#include <vector>
int min_vector_element(const std::vector<double>& vin){
    int min_index=0;
    if(vin.size()==0){
        return -1;
    }
    for(int i=0;i<vin.size();i++)
    { 
    if (vin[i]< vin[min_index]){
        min_index=i;
    }
        return min_index;
    

    }
}
int main(){
    std::vector<double>v={0,2,4,6};
    std::cout<<min_vector_element(v)<<std::endl;

}