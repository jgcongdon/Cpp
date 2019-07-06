#include <iostream>
using namespace std;

int main() {
   int numUsers = 0;
   int updateDirection = 0;

   numUsers = 8;
   updateDirection = 1;

   /* Your solution goes here  */
   numUsers = (updateDirection == 1) ? ++numUsers : --numUsers;
   /* Your solution ends here  */

   cout << "New value is: " << numUsers << endl;

   return 0;
}
