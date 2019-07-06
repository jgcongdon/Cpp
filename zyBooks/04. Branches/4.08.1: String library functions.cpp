#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   int stringSize = 0;

   userInput = "Hello";

   /* Your solution goes here  */
   stringSize = userInput.length();
   /* Your solution ends here  */

   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}
