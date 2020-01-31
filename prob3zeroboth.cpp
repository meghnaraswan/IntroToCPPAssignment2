//
//  prob3zeroboth.cpp
//  Meghna Raswan
//
//
//
//  Implement a void function called zeroBoth that has two call-by-reference parameters, both of which are variables of type int, and sets the values of both variables to 0.

#include "prob3zeroboth.hpp"

#include <iostream>
using namespace std;

void zeroBoth(int& x1, int& x2) //function for reassigning the inout integers to 0
{
    x1 = 0; //reassigns first value to 0
    x2 = 0; //reassigns second value to 0
}

int main() {
    int a1; //integer value
    int a2; //integer value
    
    cout << "Enter the first integer: " << endl; //user input for first integer
    cin >> a1; //input for a1
    cout << "Enter the second integer: " << endl; //user input for second integer
    cin >> a2; //input for a2

    zeroBoth(a1, a2); //calls zeroBoth function
    
    cout << "New first integer value: " << a1 << endl; //outputs the value of a1, which is 0
    cout << "New second integer value: " << a2 << endl; //outputs the value of a2, which is 0
    
    return 0;
}
