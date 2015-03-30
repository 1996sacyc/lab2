#include <string>
#include <iostream>
#include"BMI.h" 
using namespace std;                                                                                                      
void BMI::set_h(double h){
     height=h/100;
}

void BMI::set_m(double m){
     mass=m;
}     

double BMI::get_h(){
    return height;
}

double BMI::get_m(){
    return mass;
}

double BMI::get_bmi(){
       bmi=mass/(height*height);
       return bmi;
}
 
string BMI::category(double bmi){
          if (bmi<15){
          range="Very severely underweight";
          }
          else if (bmi>=15&&bmi<16){
          range="Severely underweight";
          }
          else if (bmi>=16&&bmi<18.5){
          range="Underweight";
          }
          else if (bmi>=18.5&&bmi<25){
          range="Normal";
          }
          else if (bmi>=25&&bmi<30){
          range="Overweight";
          }
          else if (bmi>=30&&bmi<35){
          range="Obese Class I(Moderately obese)";
          }
          else if (bmi>=35&&bmi<40){
          range="Obese Class II(Severely obese)";
          }
          else if (bmi>=40){
          range="Obese Class III(Very severely obese)";
          }
          return range;
}
