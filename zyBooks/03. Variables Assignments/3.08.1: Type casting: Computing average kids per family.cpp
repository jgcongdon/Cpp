#include <iostream>
using namespace std;

int main() {
   int numKidsA = 1;
   int numKidsB = 4;
   int numKidsC = 5;
   int numFamilies = 3;
   double avgKids = 0.0;

   /* Your solution goes here  */
   avgKids = static_cast<double>(numKidsA + numKidsB + numKidsC) / static_cast<double>(numFamilies);
   /* Your solution ends here  */

   cout << "Average kids per family: " << avgKids << endl;

   return 0;
}
