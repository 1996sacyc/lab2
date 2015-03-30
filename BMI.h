#include<iostream>
#include<string>
//#include<fstream>  
//#include<cstdlib>                                          
using namespace std;
class BMI{
    public:
    void set_h(double height);
    void set_m(double mass);	
    void set_bmi(double bmi);
    double get_h();
    double get_m();	
    double get_bmi();
    string category(double bmi);
    
    private:
    double height;
    double mass;
    double bmi;
    string range;
};

