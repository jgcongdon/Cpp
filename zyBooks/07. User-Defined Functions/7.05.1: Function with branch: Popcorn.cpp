#include <iostream>
using namespace std;

void PrintPopcornTime(int bagOunces) {

   /* Your solution goes here  */
   if (bagOunces < 3) {
      cout << "Too small" << endl;
   }
      else if (bagOunces > 10) {
         cout << "Too large" << endl;
      }
         else {
            cout << 6 * bagOunces << " seconds" << endl;
         }
   /* Your solution ends here  */
}

int main() {
   PrintPopcornTime(7);

   return 0;
}
