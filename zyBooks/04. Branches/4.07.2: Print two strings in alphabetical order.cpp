#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   firstString = "rabbits";
   secondString = "capes";

   /* Your solution goes here  */
   if (firstString < secondString) {
      cout << firstString << " " << secondString << endl;
   }
   else {
      cout << secondString << " " << firstString << endl;
   }
   /* Your solution ends here  */

   return 0;
}
