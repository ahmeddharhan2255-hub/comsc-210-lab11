// COMSC-210 | Lab 11 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

struct Cars {
    string brand;
    string country;
    int year;
    int* mileage;
};

void inputinfo(Cars *);
void displayinfo(Cars *);

int main(){

    int NUM_CARS;
    
    cout << "Enter the number cars oil changed ";
    cout << " and mileage from recent visits: ";
    cin >> NUM_CARS;

    Cars *total = new Cars[NUM_CARS];
    
    for(int i = 0; i < NUM_CARS; i++){
        inputinfo(&total[i]);
    }

    for(int i = 0; i < NUM_CARS; i++){
        displayinfo(&total[i]);
    }

    return 0;

}

void inputinfo(Cars *total){
    
}

void displayinfo(Cars *total){
    
}