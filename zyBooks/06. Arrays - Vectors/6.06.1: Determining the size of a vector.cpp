#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> sensorReadings(4);
   int currentSize;

   sensorReadings.resize(10);

   /* Your solution goes here  */
   currentSize = sensorReadings.size();
   /* Your solution goes here  */

   cout << "Number of elements: " << currentSize << endl;

   return 0;
}
