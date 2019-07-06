#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   bool hasDigit = false;
   string passCode;
   int valid = 0;

   passCode = "abc";

   /* Your solution goes here  */
   hasDigit = isdigit(passCode[0]) || isdigit(passCode[1]) || isdigit(passCode[2]);
   /* Your solution ends here  */

   if (hasDigit) {
      cout << "Has a digit." << endl;
   }
   else {
      cout << "Has no digit." << endl;
   }

   return 0;
}
