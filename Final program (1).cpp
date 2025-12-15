/**
 * PROJECT DOCUMENTATION: Basic C++ Net Salary Calculator
  * * This program calculates an employee's net monthly wage after accounting for 
   * transportation bonus, overtime, and mandatory deductions (Tax and Insurance).
    * * --- VARIABLE MAPPING ---
     * * INPUT/MAIN VARIABLES (Used across the program):
      * * - wage:     (basicWage / baseSalary) The employee's fundamental monthly salary, used to calculate tax.
       * - trans:    (transportBonus) Fixed allowance added to the wage.
        * - over:     (overtimeHours) Total hours worked overtime.
         * - sover:    (overtimeHourlyRate) The price paid per overtime hour.
          * - other:    (insuranceDeduction) The fixed insurance/other monthly deduction.
           * - tax:      (calculatedTax) The final computed tax amount (starts at 0).
            * * RESULT VARIABLES (Calculated outputs):
             * * - m:        (grossIncome) The total income before any deductions (basicWage + bonus + overtime pay).
              * - v:        (totalDeductions) The sum of all mandatory deductions (tax + insuranceDeduction).
               * * FUNCTION:
                * * - double all(double w, const double t, int o, double s):
                 * Purpose: Calculates the Gross Income (m).
                  * Parameters: w (basicWage), t (transportBonus), o (overtimeHours), s (overtimeHourlyRate).
                   * * --- PROGRAM LOGIC ---
                    * * 1. Gross Income (m) is calculated by the 'all' function.
                     * 2. Tax is calculated based on 'wage' (basicWage) using the following IF/ELSE IF/ELSE structure:
                      * - If wage < 3000: Tax = 5%
                       * - If 3000 <= wage <= 6000: Tax = 10%
                        * - If wage > 6000: Tax = 15%
                         * 3. Net Wage = m (grossIncome) - v (totalDeductions).
                          **/


                          
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