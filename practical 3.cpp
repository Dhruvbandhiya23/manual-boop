#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
double kmm=1000.0;
double mcm=100.0;
double cmft=0.0328084;
double ftin=12;
double km;
cout<<"enter the km";
cin>>km;
double m=km*kmm;
double cm=m*mcm;
double ft=cm*cmft;
double in=ft*ftin;
cout<<setprecision(2)<<fixed;
cout<<setw(17)<<"total m :"<<setw(6)<<m<<endl;
cout<<setw(17)<<"total cm :"<<setw(6)<<cm<<endl;
cout<<setw(17)<<"total ft :"<<setw(6)<<ft<<endl;
cout<<setw(17)<<"total in :"<<setw(6)<<in<<endl;
return 0;
}