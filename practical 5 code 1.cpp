#include<iostream>
using namespace std;
struct Collage_info {

string name;
int code;
string department;
int intake;

};

int main()
{
Collage_info  d1 = {"Gpj",619,"computer",70};
   
   
cout << "collage name:" <<d1.name<< endl;
cout << "collage code:" <<d1.code<< endl;
cout << "department:" <<d1.department<< endl;
cout << "Intake:" <<d1.intake<< endl;
    return 0;
}