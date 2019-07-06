#include <iostream>
#include <string>
using namespace std;

int main() {
   string condStr;
   int userVal = 0;

   userVal = -9;

   condStr = /* Your solution goes here  */ (userVal < 0) ? "negative" : "non-negative" /* Your solution ends here  */;

   cout << userVal << " is " << condStr << "." << endl;

   return 0;
}
