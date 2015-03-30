#include<iostream>
#include<string>
#include<fstream>  
#include<cstdlib>
#include"BMI.h"
using namespace std;
 
int main()
{
    ifstream inFile("file.in",ios::in);
    ofstream outFile("file.out",ios::out);
    if(!outFile){
    cerr<<"failed opening"<<endl;
    exit(1);
    }

    double height;
    double mass;
    double bmi;
    string range;
    while(inFile>>height>>mass){
    BMI b;
    b.set_h(height);
    b.set_m(mass);
    height=b.get_h();
    mass=b.get_m();
    bmi=b.get_bmi();
    range=b.category(bmi);
    if (height==0||mass==0) break;
    outFile<<bmi<<"\t"<<range<<endl;
    cout<<endl;
    }
}
