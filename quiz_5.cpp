//
//  quiz_5.cpp
//  Quiz_5
//
//  Created by Lucas Dahl on 4/14/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// Headers
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    // Properties
    float principal, rate, t, intrest, totalSavings;
    
    // Gather data
    cout << "What is the balance in your savings account? $";
    cin >> principal;
    cout << "What is your intrest rate? ";
    cin >> rate;
    cout << "How many times a year is it compounded during the year? ";
    cin >> t;
    
    // Make calculations
    totalSavings = principal * pow((1+(rate / t)), t);
    intrest = totalSavings - principal;
    
    // Let the user know the info
    cout << "Intrest Rate: " << rate << "%" << endl;
    cout << "times Compounded: " << t << endl;
    cout << "Principal: " << principal << endl;
    cout << "Intrest: " << intrest << endl;
    cout << "Amount in Savings " << totalSavings << endl;
    
    // Exits the program
    return 0;
}
