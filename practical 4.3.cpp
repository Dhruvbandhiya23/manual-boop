#include<iostream>
#include<iomanip>
using namespace std;
float sum(float a, float pi=3.14){
return pi*a*a;
}
int main()
{
double total;
float r;


cout << fixed << endl;
cout << "enter radius" << endl;
cin >> r;
total=sum(r);
cout << total << endl;
    return 0;
}