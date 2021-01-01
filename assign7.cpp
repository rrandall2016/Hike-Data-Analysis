/**
* @brief Assignment 7
* @name Randy Randall
*/


#include <iostream>
#include <iomanip>
#include "hikeFunctions.h"

using namespace std;

int main()
{
    //Array size declaration
    const int HIKE_LENGTH = 9;
    int array[HIKE_LENGTH] ={0};

    cout << "Enter elevations: ";

    //Enter array elevation elements
    getData(array,HIKE_LENGTH);
    cout << endl;

    cout << "Highest points:" << endl;

    //First, second, and all highest points
    int first = HIKE_LENGTH / 2;
    if(first % 2 != 0){
        first = (HIKE_LENGTH/2) + 1;
    }

    int firstHighest = getHighestPointFirst(array,first);
    cout << "First half: " << firstHighest << endl;

    //Second half for highest point
    int second = first + 1;
    int secondHalf = getHighestPointSecond(array, second, HIKE_LENGTH);
    cout << "Second half: " << secondHalf << endl;

    //Overall highest point
    int highestpoint = getHighestPointBetween(array, 0,HIKE_LENGTH);
    cout << "Overall: " << highestpoint << endl;

    //Prints out average with two decimal points
    double total = getAverage(array, HIKE_LENGTH);
    cout << "Average elevation: " << setprecision(2) << fixed << total << endl;

    //Prints out number of peaks
    int peaks = getNumPeaks(array,HIKE_LENGTH);
    cout << "Peaks: " << peaks << endl;

    //Difficult Segments
    int steep = getNumSteepSegements(array, HIKE_LENGTH);
    cout << "Difficult segments: " << steep << endl;

    //Total change of vertical elevation
    int totalish = getTotalChange(array,0,HIKE_LENGTH-1);
    cout << "Elevation change: " << totalish << endl;



}
