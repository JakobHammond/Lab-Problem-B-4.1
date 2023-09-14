//
//  main.cpp
//  p4-1
//
//  Created by Jakob Hammond on 9/14/23.
//

#include <iostream>
using namespace std;

int main(void){
    int inputTemperature; //temp given by user
    char temperatureScale; //scale given
    const char CELSIUS = 'C';
    const char FAHRENHEIT = 'F';
    
    cout << "Please enter temperature value: ";
    cin >> inputTemperature >> temperatureScale;
    
    //if temperature is in Celsius
    if (temperatureScale == CELSIUS){
        //temperature below 0
        if(inputTemperature < 0){
            cout << "Water is a solid at that temperture." << endl;
        }
        //temperature is exactly 0
        else if(inputTemperature == 0){
            cout << "Water is both a solid and a liquid at that temperature." << endl;
        }
        //temperature is between 0 and 100
        else if(inputTemperature < 100){
            cout << "Water is a liquid at that temperature" << endl;
        }
        //temperature is exactly 100
        else if(inputTemperature == 100){
            cout << "Water is both a liquid and a gas at that temperature." << endl;
        }
        //temperature is over 100
        else{
            cout << "Water is a gas at that temperature." << endl;
        }
    }
    
    //if temperature is in Fahrenheit
    if (temperatureScale == FAHRENHEIT){
        //temperature below 32
        if(inputTemperature < 32){
            cout << "Water is a solid at that temperture." << endl;
        }
        //temperature is exactly 32
        else if(inputTemperature == 32){
            cout << "Water is both a solid and a liquid at that temperature." << endl;
        }
        //temperature is between 32 and 212
        else if(inputTemperature < 212){
            cout << "Water is a liquid at that temperature" << endl;
        }
        //temperature is exactly 212
        else if(inputTemperature == 212){
            cout << "Water is both a liquid and a gas at that temperature." << endl;
        }
        //temperature is over 212
        else{
            cout << "Water is a gas at that temperature." << endl;
        }
    }
    
    
    
}
