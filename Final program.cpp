#include <iostream>
double all(double w,const double t,int o,double s){
    double result = w+t+(o*s);
    return result;
}
int main(){
    std::cout<<"Welcome to wage calculator"<<std::endl<<std::endl;
     double wage = 0;
     
    double trans = 0;
    
    int over = 0;
    
    double sover = 0;
    
    double other = 0;
    
    double tax =0;
    
    double m = 0;
    
std::cout<<"----enter your wage without decimal number----";  
    std::cout<<std::endl;
    std::cin>>wage;
    std::cout<<std::endl;


std::cout<<"----enter transfer bounce----";
    std::cout<<std::endl;
    std::cin>>trans;
    std::cout<<std::endl;


std::cout<<"----enter overtime hours----";
    std::cout<<std::endl;
    std::cin>>over;
    std::cout<<std::endl;


std::cout<<"----enter price of overtime per hour----";
    std::cout<<std::endl;
    std::cin>>sover;
    std::cout<<std::endl;


std::cout<<"----enter price of insurance";
    std::cout<<std::endl;
    std::cin>>other;
 std::cout<<std::endl;  
 std::cout<<"----All information----";
 std::cout<<std::endl;
 std::cout<<std::endl;
std::cout<<"----All wege----";
std::cout<<std::endl;
m =all(wage,trans,over,sover);

std::cout<<m;

if(wage < 3000) {
    tax = wage*0.05;
}
else if (wage >= 3000 && wage <= 6000){
    tax = wage*0.10;
}
else {
    tax = wage * 0.15;
}
    std::cout<<std::endl;
    std::cout<<"----Tax----";
    std::cout<<std::endl;
    std::cout<<tax;
    double v =tax+other;
    std::cout<<std::endl;
    std::cout<<"----tax and insurance----";
    std::cout<<std::endl;
    std::cout<<v;
    std::cout<<std::endl;
    std::cout<<"----Net wage----";
    std::cout<<std::endl;
    std::cout<<m-v;








return 0;
}
