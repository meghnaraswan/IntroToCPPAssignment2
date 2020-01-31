//
//  prob1intarray.cpp
//  Meghna Raswan
//
//
//
//  Write a program that will read up to ten nonnegative integers into an array called numberArray and then write the integers back to the screen (console output). For this exercise you need not use any functions.

#include "prob1intarray.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 10; //number of elements in vector
    int numberArray[NUM_ELEMENTS]; //user values
    unsigned int i; //loop index
   
   
    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) { //the loop loops from 0 to 9 values, asking for 10 integer values in total from the user
        cout << "Value: ";
        cin >> numberArray[i]; //input index increments by one in each loop
        cout << endl;
    }
    for (i = 0; i < NUM_ELEMENTS; ++i) { //the loop outputs the user's inputs in every line
        cout << numberArray[i];
        cout << endl;
    }
   
    return 0;
}
