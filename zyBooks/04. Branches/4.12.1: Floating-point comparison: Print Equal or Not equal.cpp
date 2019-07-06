#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double targetValue = 0.3333;
   double sensorReading = 0.0;

   sensorReading = 1.0/3.0;

   if (/* Your solution goes here  */ fabs(sensorReading - targetValue) < 0.0001 /* Your solution ends here  */) {
      cout << "Equal" << endl;
   }
   else {
      cout << "Not equal" << endl;
   }

   return 0;
}
