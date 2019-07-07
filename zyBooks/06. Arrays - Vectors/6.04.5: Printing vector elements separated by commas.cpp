#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> hourlyTemp(NUM_VALS);
   int i = 0;

   hourlyTemp.at(0) = 90;
   hourlyTemp.at(1) = 92;
   hourlyTemp.at(2) = 94;
   hourlyTemp.at(3) = 95;

   /* Your solution goes here  */
   for (i = 0; i < NUM_VALS; i++) {
      if (i < (NUM_VALS - 1)) {
         cout << hourlyTemp.at(i) << ", ";
      }
         else {
            cout << hourlyTemp.at(i);
         }
      }
   /* Your solution ends here  */

   cout << endl;

   return 0;
}
