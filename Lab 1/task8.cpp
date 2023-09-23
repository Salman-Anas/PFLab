#include<iostream>
using namespace std;
main(){
	float volts;
	float amperes;
	float watts;
	cout <<"Enter voltage (in volts): ";
	cin  >> volts;
	cout << "Enter current (in amperes): ";
	cin  >> amperes;
	watts = volts * amperes;
	cout << "The power is " << watts << " watts.";



}