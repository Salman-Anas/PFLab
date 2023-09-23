#include<iostream>
using namespace std;
main(){
    float wInPounds;
    float wInKgs;
    cout << "Enter weight in pounds: ";
    cin  >> wInPounds;
    wInKgs = wInPounds * .45;
    cout << wInPounds << " pounds is equal to " << wInKgs << " kilograms." ;


}