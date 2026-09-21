// COMSC-210 | Lab 11 | Ahmad Dharhan
//This programs allows a user to enter
//"n" number of cars and include info from brand
//to model etc and track mileage after each oil change

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

//Function Prototypes
int inputinfo(Cars *, int val);
void displayinfo(Cars *, int numvisits, int customnum);

int main(){

    int NUM_CARS;
    vector<int> visit;
    
    cout << "Enter the number of cars: ";
    cin >> NUM_CARS;
    cin.ignore();

    Cars *total = new Cars[NUM_CARS];
    
    //Populates num of cars inputted by user
    for(int i = 0; i < NUM_CARS; i++){
        int value = inputinfo(&total[i], i + 1);
        visit.push_back(value);

    }

    //Entire sequence displays car data
    cout << "CUSTOMER INFO DISPLAY: " << endl;
    cout << "***************************" << endl;

    for(int i = 0; i < NUM_CARS; i++){
        displayinfo(&total[i], visit[i], i + 1);
        cout << "***************************" << endl;
    }

    //Deallocates memory  in struct first
    //and then deallocates total
    for(int i = 0; i < NUM_CARS; i++){
        delete[] total[i].mileage;
    }

    delete[] total;

    return 0;

}


int inputinfo(Cars *total, int val){
    int visits;

    cout << "Enter customer #" << val << " info:" << endl;

    cout << "Brand: ";
    getline(cin, total -> brand);

    cout << "Country where car Is Manufactured: ";
    getline(cin, total ->country);

    cout << "Model: ";
    getline(cin, total -> model);

    cout << "Year: ";
    cin >> total -> year;

    cout << "How many oil changes have you had? ";
    cin >> visits;

    total -> mileage = new int[visits];

    for(int i = 0; i < visits; i++){
        cout << "Enter mileage for visit #" << i + 1 << endl;
        cin >> total -> mileage[i];
    }

    cin.ignore();

    return visits;

}

void displayinfo(Cars *total, int numvisits, int customnum){
    cout << "CAR NUMBER #" << customnum << endl;
    cout << "COUNTRY: " << total -> country << endl;
    cout << "BRAND: " << total -> brand << endl;
    cout << "MODEL: " << total -> model << endl;
    cout << "YEAR: " << total -> year << endl;

    cout << "MILEAGE: ";

    for(int i = 0; i < numvisits; i++){
        cout << total -> mileage[i] << " ";
    }

    cout << endl;

}