#include <iostream>
using namespace std;

class data_information{
double quantity;
double coast;

public:
     
 void put_data(double q,double c){
   quantity = q ;
   coast = c ;
 }
 double get_data();
};

double data_information::get_data(){
   cout << "The value of quantity : " << quantity << endl ;
   cout << "The value of coast : " << coast ;
   return 0;
}


int main() 
{
double a,b;
cout << "Enter the quantity of the product" << endl;
cin >> a;
cout << "Enter the cost of the product" << endl;
cin >> b;
   data_information d1;
   d1.put_data(a,b);
   d1.get_data();
    
   return 0;
}