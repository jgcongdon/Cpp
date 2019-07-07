#include <iostream>
using namespace std;

int main() {
   int numStars = 0;
   int numPrinted = 0;

   numStars = 12;
   numPrinted = 1;

   /* Your solution goes here  */
   while (numPrinted <= numStars) {
   cout << "*";
   numStars--;     
}
   /* Your solution ends here  */

   cout << endl;

   return 0;
}
