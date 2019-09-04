#include <iostream>
using namespace std;

int main() {
   double* houseHeight = nullptr;

   /* Your solution goes here  */
   houseHeight = new double;
   /* Your solution ends here  */
   

   *houseHeight = 23;
   cout << "houseHeight is " << *houseHeight;

   delete houseHeight;

   return 0;
}
