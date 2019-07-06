#include <iostream>
using namespace std;

int main() {
   bool isRed = false;
   bool isBalloon = false;

   /* Your solution goes here  */
   if ((isBalloon == true) && (isRed == false)) {
      cout << "Balloon" << endl;
   }
   
   else if ((isBalloon == true) && (isRed == true)) {
      cout << "Red balloon" << endl;
   }
   else {
      cout << "Not a balloon" << endl;
   }
   /* Your solution ends here  */

   return 0;
}
