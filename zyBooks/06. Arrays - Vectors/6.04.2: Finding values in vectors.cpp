#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> userValues(NUM_VALS);
   int i = 0;
   int matchValue = 0;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   userValues.at(0) = 2;
   userValues.at(1) = 2;
   userValues.at(2) = 1;
   userValues.at(3) = 2;

   matchValue = 2;

   /* Your solution goes here  */
   numMatches = 0;
   
   for (i=0; i < userValues.size(); i++) {
      if (userValues.at(i) == matchValue) {
         numMatches++;
      }
   }
   /* Your solution goes here  */

   cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

   return 0;
}
