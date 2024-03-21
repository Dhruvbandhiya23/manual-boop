#include<iostream>
#include <iomanip>
using namespace std;
class convert{

public:
double  cm;


double centi(){
fixed;
return cm*0.01;
}
double cam(){
fixed;
return cm*0.00001;
}
double cmm(){
fixed;
return cm*0.032;
}
double cmmm(){
fixed;
return cm*0.393;



}
};
int main()
{
convert c1;
    cout << "enter value in cm" << endl;
    cin >> c1.cm;
    
    fixed ;
    
    
    cout << "The value of cm into meters is " <<c1.centi()<<endl;
cout << "The value of cm into km is " <<c1.cam()<<endl;
cout << "the value of cm into feet is " <<c1.cmm()<< endl;
cout << "The value of cm into in is " <<c1.cmmm()<<endl;
    return 0;
    
}