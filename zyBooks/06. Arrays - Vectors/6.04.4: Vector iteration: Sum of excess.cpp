#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> testGrades(NUM_VALS);
   int i = 0;
   int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

   testGrades.at(0) = 101;
   testGrades.at(1) = 83;
   testGrades.at(2) = 107;
   testGrades.at(3) = 90;

   /* Your solution goes here  */
   sumExtra = 0;

   for (i = 0; i < NUM_VALS; i++) {
      if (testGrades.at(i) > 100) {
         sumExtra = sumExtra + testGrades.at(i) - 100;
      }
   }
   /* Your solution ends here  */

   cout << "sumExtra: " << sumExtra << endl;
   return 0;
}
