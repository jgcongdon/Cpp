#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> tempReadings(3);
   int newValue = 0;
   unsigned int i = 0;

   tempReadings.at(0) = 53;
   tempReadings.at(1) = 57;
   tempReadings.at(2) = 60;

   newValue = 67;

   /* Your solution goes here  */
   tempReadings.push_back(newValue);
   /* Your solution ends here  */

   for (i = 0; i < tempReadings.size(); ++i) {
      cout << tempReadings.at(i) << " ";
   }
   cout << endl;

   return 0;
}
