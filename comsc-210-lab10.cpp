// COMSC-210 | Lab 11 | Ahmad Dharhan

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Cars {
    string brand;
    string country;
    string model;
    int year;
    int* mileage;
    
};

int inputinfo(Cars *, int val);
void displayinfo(Cars *);

int main(){

    int NUM_CARS;
    vector<int> visit;
    
    cout << "Enter the number cars oil changed ";
    cout << " and mileage from recent visits: ";
    cin >> NUM_CARS;

    Cars *total = new Cars[NUM_CARS];
    
    for(int i = 0; i < NUM_CARS; i++){
        int value = inputinfo(&total[i], i + 1);
        visit.push_back(value);

    }

    for(int i = 0; i < NUM_CARS; i++){
        displayinfo(&total[i], visit[i]);
    }
    return 0;

}

int inputinfo(Cars *total, int val){
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

    return visits

}

void displayinfo(Cars *total,){
    for
}