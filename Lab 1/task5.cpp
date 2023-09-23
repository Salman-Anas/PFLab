#include<iostream>
using namespace std;
main(){
	string name;
	float matricMarks;
	float interMarks;
	float ecatMarks;
	float aggregate;

	cout << "Enter the student's name: ";
	cin  >>  name;
	cout << "Enter matriculation marks (out of 1100): ";
	cin  >>  matricMarks;
	cout << "Enter intermediate marks (out of 550): ";
	cin  >>  interMarks;
	cout << "Enter Ecat marks (out of 400): ";
	cin  >>  ecatMarks;
	
	float matricPercentage;
	float interPercentage;
	float ecatPercentage;
	
	matricPercentage = matricMarks/1100 *100;
	interPercentage = interMarks/550 *100;
	ecatPercentage = ecatMarks/400 *100;
	
	aggregate = ecatPercentage *.5 + interPercentage*.4 + matricPercentage*.1;
	cout << "Aggregate score for " << name << " in UET is: " <<aggregate << "%";


}