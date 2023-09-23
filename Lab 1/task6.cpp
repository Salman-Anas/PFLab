#include<iostream>
using namespace std;
main(){
	float MBs;
	float bits;
	cout <<"Enter the size in megabytes (MB): ";
	cin  >> MBs;
	bits = MBs * 1024 * 1024 * 8; 
	cout <<MBs << " MB is equivalent to " << bits << " bits.";

}