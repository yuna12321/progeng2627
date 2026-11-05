#include <iostream>

bool leap_year(int year){
    bool ly = (year%4==0&&year%100!=0 || year%400==0);
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
if (m1==1||m1==3||m1==5||m1==7||m1==8||m1==10&&d1==31){
    m2=m1+1,d2=1,y2=y1;
}
if (m1==4||m1==6||m1==9||m1==11&&d1==30){
    m2=m1+1,d2=1,y2=y1;}
if (m1==2&&d1==28&&leap_year(y1)==false){
    m2=3,d2=1,y2=y1;
}
if (m1==2&&d1==29&&leap_year(y1)==true){
    m2=3,d2=1,y1=y2;
}
if (m1==12&&d1==31){
    d2=1,m2=1,y2=y1+1;
}
else{
    m2=m1,y2=y1, d2=d1+1;
}
}

int main(){
    int d1,m1,y1,d2,m2,y2;
    std::cin>>d1>>m1>>y1;
    next_date(d1, m1, y1, d2,  m2, y2);
    std::cout<<d2<<m2<<y2;
    // TODO: write a main to test the function
}