// COMSC-210 | Lab 11 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

struct Cars {
    string brand;
    string country;
    int year;
    int* mileage;
    int numOilChanges;

};

void inputinfo(Cars *);
void displayinfo(Cars *);

int main(){

    int numCars;
    
    cout << "Enter the number of cars you own: ";
    cin >> numCars;

    Cars *total = new Cars[numCars];
    
    for()

    return 0;

}

void inputinfo(Cars *){

}