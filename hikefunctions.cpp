/**
* @brief Assignment 7
* @name Randy Randall
*/


#include <iostream>
#include <iomanip>
#include "hikeFunctions.h"
using namespace std;

void getData(int heights[], int size){

   for(int i = 0; i < size; i++){
       cin >> heights[i];
   }

}


int getHighestPointBetween(const int heights[], int startMile, int endMile){
    int highestpoint = INT_MIN;
    for(int i = startMile; i <= endMile; i++){
        if(heights[i] > highestpoint){
            highestpoint = heights[i];
        }
    }
    return highestpoint;
}

int getHighestPointFirst(const int heights[], int endFirst){
    int highestfirst = 0;
    for(int i = 0; i <= endFirst; i++){
        if(heights[i] > highestfirst){
            highestfirst = heights[i];
        }
    }
    return highestfirst;
}

int getHighestPointSecond(const int heights[], int startSecond, int size){
    int highestsecond = 0;
    for(int i = startSecond; i <= size; i++){
        if(heights[i] > highestsecond){
            highestsecond = heights[i];
        }
    }
    return highestsecond;
}



double getAverage(const int heights[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += heights[i];
    }
    total = total / size;
    return total;
}


int getNumPeaks(const int heights[], int size){
    int total = 0;

    for(int i = 1; i < size -1; i++){
        if(heights[i] > heights[i+1] && heights[i] > heights[i-1]){
            total += 1;
        }

    }

    return total;
}

int getNumSteepSegements(const int heights[], int size){
    int segements = 0;

    for(int i = 1; i < size; i++){
        if(heights[i] - heights[i - 1] >= 1000)
            segements += 1;
        else if(heights[i] - heights[i - 1] <= -1000)
            segements += 1;
    }
    return segements;
}


int getTotalChange(const int heights[], int startMile, int endMile){
    int total = 0;
    for(int i = startMile; i < endMile; i++){
        int temp = 0;
        if(heights[i] - heights[i + 1] > 0)
           total += heights[i] - heights[i + 1];
       if(heights[i] - heights[i + 1] < 0)
           temp = (heights[i] - heights[i+1]) * -1;
            total = total + temp;

    }
    return total;

}
