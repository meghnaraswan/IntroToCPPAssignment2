//
//  prob2TwoDArray.cpp
//  Meghna Raswan
//
//
//
//  Write code that will fill the array a (declared below) with numbers typed in at the keyboard. The numbers will be input five per line, on four lines (although your solution need not depend on how the input numbers are divided into lines).
//  int a[4][5];

#include "prob2TwoDArray.hpp"

#include <iostream>
using namespace std;

int main() {
    int a[4][5]; //the array has 4 rows and 5 columns
    int i; //rows
    int j; //columns
    int value;
    
    for (i = 0; i < 4; ++i){ //for loop increments by 1 from 0 to 3, placing the user inputs for this value in the rows section
        for (j = 0; j < 5; ++j){ //for loop increments by 1 from 0 to 4, placing the user inputs for this value in the columns section
            cout << "Enter an integer value: "; //ask for user input
            cin >> value;
            a[i][j] = value; //holds the rows and columns inouts in the array
        }
    }
    
    for (i = 0; i < 4; ++i){ //for loop for 4 indexes of rows to output for the user
        for (j = 0; j < 5; ++j){ //for loop for 5 indexes of columns to output for the user
            cout << a[i][j] << " "; //outputs integer values for each row
        }
        cout << endl; //enters a new line as the columns stop at 5
    }
    
    return 0;
}
