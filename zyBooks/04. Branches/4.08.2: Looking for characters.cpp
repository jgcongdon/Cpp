#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   char firstLetter = '-';

   userInput = "banana";
   firstLetter = 'b';

   if (/* Your solution goes here  */ userInput.at(0) == firstLetter /* Your solution ends here  */) {
      cout << "Found match: " << firstLetter << endl;
   }
   else {
      cout << "No match: " << firstLetter << endl;
   }

   return 0;
}
