#include <iostream>
using namespace std;

int main() {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = -99; // Assign with first element in milesTracker before loop
   int minMiles = -99; // Assign with first element in milesTracker before loop

   milesTracker[0][0] = -10;
   milesTracker[0][1] = 20;
   milesTracker[1][0] = 30;
   milesTracker[1][1] = 40;

   /* Your solution goes here  */
   maxMiles = milesTracker[0][0];
	 minMiles = milesTracker[0][0];
   
   for(i = 0; i < NUM_ROWS; ++i) {
		for(j = 0; j < NUM_COLS; ++j) {
			if(milesTracker[i][j] < minMiles) {
				minMiles = milesTracker[i][j];
			}
			if(milesTracker[i][j] > maxMiles) {
				maxMiles = milesTracker[i][j];
			}
		}
	}
	/* Your solution ends here  */

   cout << "Min miles: " << minMiles << endl;
   cout << "Max miles: " << maxMiles << endl;

   return 0;
}
