/**
* @brief Assignment 7
* @name Randy Randall
*/

#ifndef HIKEFUNCTIONS_H
#define HIKEFUNCTIONS_H


#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

/**
 * @brief Read elevation data into the array form console
 * @param array, size of array
 * @return void
 */
void getData(int heights[], int size);


/**
 * @brief Returns the highest elevation between the two mile markers
 * @param array, start mile, end mile integers
 * @return integer
 */
int getHighestPointBetween(const int heights[], int startMile, int endMile);


/**
 * @brief Returns the highest elevation between the two mile markers on first half
 * @param array, start mile, end mile integers
 * @return integer
 */
int getHighestPointFirst(const int heights[], int endMile);

/**
 * @brief Returns average for second half
 * @param array, start mile, size of array
 * @return integer
 */

int getHighestPointSecond(const int heights[], int startSecond, int size);


/**
 * @brief Returns the average elevation
 * @param array, and size of array
 * @return integer
 */
double getAverage(const int heights[], int size);


/**
 * @brief return the number of peaks in the hike = mile marker higher than before and after current marker
 * @param array, and size of array
 * @return integer
 */
int getNumPeaks(const int heights[], int size);


/**
 * @brief Returns the number of segements that end with a change of more than 1000ft up or down
 * @param takes cut out size
 * @return integer
 */
int getNumSteepSegements(const int heights[], int size);

/**
 * @brief Returns the total elevation change over the range from startMile to endMile
 * @param takes cut out size
 * @return integer
 */
int getTotalChange(const int heights[], int startMile, int endMile);

#endif // HIKEFUNCTIONS_H
