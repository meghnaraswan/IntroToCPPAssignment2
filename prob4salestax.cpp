//
//  prob4salestax.cpp
//  Meghna Raswan
//
//  
//
//  Implement a function called addTax. The function addTax has two formal parameters: taxRate, which is the amount of sales tax expressed as a percent; and cost, which is the cost of an item before tax. The function returns the value (float) of cost so that it includes sales tax.

#include "prob4salestax.hpp"

#include <iostream>
using namespace std;

double addTax(double taxRate, double itemCost){ //function for the cost of item with tax
    double totalCost;
    taxRate = taxRate * 0.01; //converting the percentage of tax to decimal
    totalCost = itemCost + (itemCost * taxRate); //adding the cost of item to tax to get the total cost
    return totalCost;
}

int main() {
    double usrTaxRate;
    double usrItemCost;
    double resultCost;
    
    cout << "Enter the tax rate: " << endl;
    cin >> usrTaxRate; //user input for tax
    cout << "Enter the cost of the item: " << endl;
    cin >> usrItemCost; //user input for cost of item
    
    resultCost = addTax(usrTaxRate, usrItemCost); //calling the addTax function
    
    cout << "The cost of your item with tax is: " << resultCost << endl; //output the total cost of the item
    
    return 0;
}
