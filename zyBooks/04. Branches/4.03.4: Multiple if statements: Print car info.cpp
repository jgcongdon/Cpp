#include <iostream>
using namespace std;

int main() {
   int carYear = 0;

   carYear = 1940;

   /* Your solution goes here  */
   if (carYear <= 1969) {
      cout << "Probably has few safety features." << endl;
   }
   if (carYear >= 1970) {
      cout << "Probably has seat belts." << endl;
   }
   if (carYear >= 1990) {
      cout << "Probably has anti-lock brakes." << endl;
   }
   if (carYear >= 2000) {
      cout << "Probably has air bags." << endl;
   }
   /* Your solution ends here  */

   return 0;
}
