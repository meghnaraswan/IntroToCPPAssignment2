//
//  prob5conversion.cpp
//  Meghna Raswan
//
//
//  
//  Write a program that will read in a length in feet and inches and output the equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more for calculating, and one for output(console). Include a loop that lets the user repeat this computation for new input values until the user says he or she wants to end the program (user has to type exit). There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.

#include <iostream>
#include <string>
using namespace std;

void inputData(int &numFeet, int &numInches) //function for user to inout the length in feet and inches
{
    cout << "Enter length in feet: ";
    cin >> numFeet; //user input for feet
    cout << "Enter length in inches: ";
    cin >> numInches; //user input for inches
}

double roundingTotal(double n) //function for rounding the total centimenters to integer values
{
    int x = (int) n; //converts n to an integer value
    return x;
}

void convertToMetric( int numFeet, int numInches, int& numMeters, int& numCms ) //calculating length in metric units
{
    const int CMS_PER_METER = 100.0; //constant variable for cm per m
    const int INCHES_PER_FOOT = 12.0; //constant variable for in per ft
    const double METRES_PER_FOOT = 0.3048; //constant variable for m per ft
    const double CMS_PER_FOOT = METRES_PER_FOOT * CMS_PER_METER ; //constant variable for cm per ft
    const double CMS_PER_INCH = CMS_PER_FOOT / INCHES_PER_FOOT ; //constant variable for cm per in

    const double totalCms = numFeet * CMS_PER_FOOT + numInches * CMS_PER_INCH ; //claculate the cm first
    const int totalCmsRounded = roundingTotal(totalCms); //round cm to whole number so it will be easier to get remainder of cm and outputs a whole number for cm and m

    numMeters = totalCmsRounded / CMS_PER_METER ; //calculate for m
    numCms = totalCmsRounded % CMS_PER_METER ; //calculate for cm by using the remainder of the cm rounded to cm per m
}


int main()
{
    int usrFeet;
    int usrInches;
    int usrMeters  = 0; //assign m to 0
    int usrCms = 0 ; //assign cm to 0
    string usrStr;
    
    while (true) //create a while loop until user types exit, then break
    {
        cout << "\nEnter 'continue' to run your conversion or 'exit' to quit the program: " ;
        cin >> usrStr; //user inout for whether to continue of exit
        if(usrStr == "exit") //if user inout is 'exit', then break
        {
            break;
        }
        else //else, calculate for metric units
        {
            inputData(usrFeet, usrInches); //call the input data for user to input length in feet and inches
            convertToMetric( usrFeet, usrInches, usrMeters, usrCms ); //convert data to metric units by calling convertToMetric function
            cout << usrFeet << "' " << usrInches << '"' << " = "; //output feet and inches
            cout << usrMeters << "m " << usrCms << "cm"; //output meters and centimeters
        }
        
    }
    
}
