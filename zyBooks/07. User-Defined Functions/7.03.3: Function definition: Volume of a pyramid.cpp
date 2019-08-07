#include <iostream>
using namespace std;

/* Your solution goes here  */
double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
   double baseArea = baseLength * baseWidth;
   double volumeFormula = (baseArea * pyramidHeight * 1/3);
   return volumeFormula;
}
/* Your solution ends here  */

int main() {
   cout << "Volume for 1.0, 1.0, 1.0 is: " << PyramidVolume(1.0, 1.0, 1.0) << endl;
   return 0;
}
