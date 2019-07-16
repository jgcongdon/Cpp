#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i = 0;

   hourlyTemp[0] = 90;
   hourlyTemp[1] = 92;
   hourlyTemp[2] = 94;
   hourlyTemp[3] = 95;

   /* Your solution goes here  */
   for (i=0; i < NUM_VALS; ++i) {
      if (i < NUM_VALS - 1) {
      cout << hourlyTemp[i] << ", ";
      }
      else {
         cout << hourlyTemp[i];
      }
   }
   /* Your solution ends here  */

   cout << endl;

   return 0;
}
