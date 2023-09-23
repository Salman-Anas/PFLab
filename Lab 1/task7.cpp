#include<iostream>
using namespace std;
main(){
	float hours;
	float seconds;
	cout << "Enter the number of hours: ";
	cin  >> hours;
	seconds = hours * 60 *60;
	cout << hours  << " hours is equivalent to " << seconds <<" seconds.";

}