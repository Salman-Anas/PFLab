#include<iostream>
using namespace std;
main(){
    string name;
    int rollNo;
    float aggregate;
    char section;
        
    cout << "Enter your name: ";
    cin  >> name; 
    cout << "Enter your roll number: ";
    cin  >> rollNo;
    cout << "Enter your aggregate: ";
    cin  >> aggregate;
    cout << "Enter your section: ";
    cin  >> section;
    cout << "Student Information:\n";
    cout << "Name: " << name << "\n";
    cout << "Roll Number: " << rollNo << "\n";
    cout << "Aggregate: " << aggregate << "\n";
    cout << "Section: " << section << "\n";


}