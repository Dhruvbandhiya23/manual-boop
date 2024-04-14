#include<iostream>
using namespace std;
inline double multi(double a,double b){

return a*b;


};
int main()
{
int x,y;
    cout << "enter two no." << endl;
    cin >> x>>y;

    cout << "the multiplication of two no. is " <<multi (x,y)<< endl;
    
    
    return 0;
}
