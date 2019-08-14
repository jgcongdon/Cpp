#include <iostream>
using namespace std;

/* Your solution goes here  */

void CoordTransform(int xVal, int yVal, int& xValNew, int& yValNew) {
   xValNew = (xVal + 1) * 2;
   yValNew = (yVal + 1) * 2;
}

/* Your solution ends here  */

int main() {
   int xValNew = 0;
   int yValNew = 0;

   CoordTransform(3, 4, xValNew, yValNew);
   cout << "(3, 4) becomes " << "(" << xValNew << ", " << yValNew << ")" << endl;

   return 0;
}
