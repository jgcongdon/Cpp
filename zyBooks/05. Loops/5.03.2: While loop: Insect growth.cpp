#include <iostream>
using namespace std;

int main() {
   int numInsects = 0;

   numInsects = 8; // Must be >= 1

   /* Your solution goes here  */
   while (numInsects >= 1 && numInsects < 100) {
      
      numInsects = numInsects * 2;
      cout << numInsects << " ";
   }

   cout << endl;
   /* Your solution ends here  */

   return 0;
}
