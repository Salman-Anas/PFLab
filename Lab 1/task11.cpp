#include<iostream>
using namespace std;
main(){
	float population;
	float BPM;
	
	cout << "Enter the current world population: ";
	cin  >> population;
	cout << "Enter the monthly birth rate (number of births per month): ";
	cin  >> BPM;
	population = population + (BPM * 12 * 30);
	cout << "the population in three decades will be: " << population;





}