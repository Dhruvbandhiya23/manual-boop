#include<iostream>
#include <string>
#include<iomanip>
using namespace std;
class Employeee{
public:

int num;
char name [25];
int Basic;
int DA;
int netsalary;
int it;

};

int main()
{
Employeee e1;
fixed;



cout << "enter the number of employee" << endl;
cin >> e1.num;

cout << "enter the name of employee" << endl;
cin >> e1.name;

cout << "enter the salary of employee" << endl;
cin >> e1.Basic;

cout << "enter the net salary of employee" << endl;
cin >> e1.netsalary;

cout << "enter the income tax of employee" << endl;
cin >> e1.it;

cout << "Employee number =" << e1.num<<endl;
cout << "Employee Name= " << e1.name<<endl;
cout << "Employee Basic =" << e1.Basic<<endl;
 cout << "Employee DA=" << e1.DA<<endl;
 cout << "Employee net salary= " << e1.netsalary<<endl;   
cout << "Employee income tax= " << e1.it<<endl;
    return 0;
}
