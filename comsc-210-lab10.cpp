// COMSC-210 | Lab 11 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

struct Cars {
    string brand;
    string country;
    string model;
    int year;
    int* mileage;
};

void inputinfo(Cars *, int val);
void displayinfo(Cars *);

int main(){

    int NUM_CARS;
    
    cout << "Enter the number cars oil changed ";
    cout << " and mileage from recent visits: ";
    cin >> NUM_CARS;

    Cars *total = new Cars[NUM_CARS];
    
    for(int i = 0; i < NUM_CARS; i++){
        inputinfo(&total[i], i + 1);
    }

    for(int i = 0; i < NUM_CARS; i++){
        displayinfo(&total[i]);
    }

    return 0;

}

void inputinfo(Cars *total, int val){
    int visits;

    cout << "Enter customer #" << val << " info:" << endl;
    cout << "Brand: ";
    getline(cin, total -> brand);
    cout << "Country Car Is Manufactured: ";
    getline(cin, total ->country);
    cout << "Model: ";
    getline(cin, total -> model);
    cout << "Year: ";
    cin >> total -> year;

    cout << "How many oil changes have you had? ";
    cin >> visits;

    total -> mileage = new int[visits];
    
    for(int i = 0; i < visits; i++){
        cout << "Enter mileage for visit #" << i << endl;
        cin >> total -> mileage[i];
    }

}

void displayinfo(Cars *total){
    
}