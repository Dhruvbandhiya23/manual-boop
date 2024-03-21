#include<iostream>
using namespace std;

double sort(double &a, double &b){
  double temp;
  temp=a;
  a=b;
  b=temp;
  
 
 return a;
 return b;
  };
int main()
{
double x,y;

cout << "enter two no." << endl;
cin >> x>>y;
cout << "before swaping value of  x is :" <<x<< endl;
cout << "before swaping value of y is " <<y<< endl;



sort(x,y);

cout << "after swaping value of x is  " <<x<< endl;
cout << "after swaping value of y is " <<y<< endl;


    return 0;
}